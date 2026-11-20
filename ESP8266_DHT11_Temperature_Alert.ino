#include <ESP8266WiFi.h>
#include <KiwisIoT.h>
#include <DHT.h>

// WiFi credentials
const char* ssid = "APOORVASRI";
const char* pass = "12345678";

// KiwisIoT Topic ID
const char* topic = "dash_1794810187236";

// DHT11 sensor
#define DHTPIN D1
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

// LED and buzzer pins
#define LED_PIN D3
#define BUZZER_PIN D2

// Temperature limit
#define TEMP_LIMIT 33

// KiwisIoT object
KiwisIoT kiwisiot(ssid, pass, topic);

void setup() {

  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);

  dht.begin();

  kiwisiot.begin();

  Serial.println("Temperature Alert System Started");
}

void loop() {

  kiwisiot.run();

  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("DHT11 Sensor Error!");
    delay(2000);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  if (temperature >= TEMP_LIMIT) {

    Serial.println("HOT!");

    // LED blinking
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);

    kiwisiot.send("0", 1);
    kiwisiot.send("1", "It is Hot");
    kiwisiot.send("2", temperature);

    delay(500);

    digitalWrite(LED_PIN, LOW);

    delay(500);

  }

  else {

    Serial.println("NORMAL");

    digitalWrite(LED_PIN, LOW);
    digitalWrite(BUZZER_PIN, LOW);

    kiwisiot.send("0", 0);
    kiwisiot.send("1", "It is Normal");
    kiwisiot.send("2", temperature);

    delay(2000);
  }
}
