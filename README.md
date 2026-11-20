# 🌡️ ESP8266 DHT11 IoT Temperature Alert System Using KiwisIoT    

## 📌 Project Overview   

The **ESP8266 DHT11 IoT Temperature Alert System**  is an IoT-based project designed to monitor surrounding temperature and provide automatic alerts when the temperature reaches a predefined limit.

This project uses an ESP8266 Wi-Fi module and a DHT11 temperature sensor to measure real-time temperature. When the temperature reaches or exceeds **33°C**, the LED and buzzer are activated to indicate a high-temperature condition.

The KiwisIoT cloud platform is used to monitor temperature readings and alert status remotely through widgets.

## 🎯 Objectives

- Monitor real-time temperature using the DHT11 sensor.
- Automatically detect high-temperature conditions.
- Activate an LED and buzzer when the temperature reaches 33°C.
- Display temperature readings on the KiwisIoT dashboard.
- Monitor temperature status remotely using IoT technology.

## 🛠️ Components Required

- ESP8266 NodeMCU
- DHT11 Temperature Sensor
- LED
- Buzzer
- Jumper Wires
- Breadboard
- USB Cable

## 🔌 Pin Connections

| Component | ESP8266 Pin |
|---|---|
| DHT11 Data | D1 |
| LED | D3 |
| Buzzer | D2 |

## ⚙️ Working Principle

1. The DHT11 sensor measures the surrounding temperature.
2. The ESP8266 reads the temperature data from the sensor.
3. If the temperature is **33°C or above**, the system identifies it as a HOT condition.
4. The LED starts blinking and the buzzer turns ON.
5. If the temperature is below 33°C, the LED and buzzer remain OFF.
6. Temperature readings and alert messages are sent to the KiwisIoT cloud platform.
7. The user can monitor the temperature and system status through the dashboard.

## ☁️ KiwisIoT Dashboard Configuration

The project uses three KiwisIoT widgets:

| Channel | Widget | Function |
|---|---|---|
| 0 | LED | Displays the temperature alert status |
| 1 | Label | Displays HOT or NORMAL message |
| 2 | Value | Displays real-time temperature |

## 💻 Source Code

The complete Arduino source code is available here:

[ESP8266_DHT11_Temperature_Alert.ino](ESP8266_DHT11_Temperature_Alert.ino)

## 📸 Project Output

![Temperature Alert System Output](TEMPERATURE%20ALERT%20OUTPUT.jpeg)

## ☁️ KiwisIoT Output

![KiwisIoT Dashboard Output](KIWISIOT%20OUTPUT.jpeg)

## Platform
*IoT platform:*[KiwisIoT](https://kiwisiot.in)

## 🚀 Applications

- Smart home temperature monitoring
- Industrial temperature monitoring
- Server room temperature alerts
- Greenhouse temperature monitoring
- IoT-based environmental monitoring

## 🔮 Future Improvements

- Add mobile notifications for high-temperature alerts.
- Store temperature readings for historical analysis. 
- Add humidity monitoring.
- Integrate additional sensors for environmental monitoring.

## 🏁 Conclusion

The ESP8266 DHT11 IoT Temperature Alert System provides an effective way to monitor temperature and detect high-temperature conditions automatically. By integrating ESP8266 with the KiwisIoT cloud platform, the system enables real-time temperature monitoring and remote alert status visualization.
