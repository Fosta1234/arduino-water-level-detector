# Arduino Water Level Detector (3-Stage Indicator)

A real-time monitoring system that detects the depth of water in a container and provides visual feedback using three LEDs (Low, Medium, High).

## 📖 Project Overview
This project uses an analog water level sensor to measure liquid depth. The **Arduino Uno** processes the sensor's analog output and translates it into three distinct levels, triggering different LEDs to help prevent tank overflow or monitor depletion.

## ⚙️ Working Principle
*   **Sensing:** The sensor consists of parallel conductive traces. When submerged, water acts as a variable resistor; more water decreases resistance, increasing the output voltage.
*   **Processing:** The Arduino's **ADC (Analog-to-Digital Converter)** reads this voltage on Pin **A0** as a value between 0 and 1023.
*   **Indication:** The firmware compares the reading against three calibrated thresholds to light up the Red (Low), Yellow (Medium), or Green (High) LEDs.

## 🛠️ Components Used
*   **Arduino Uno**
*   **Water Level Sensor Module**
*   **3 LEDs** (Red, Yellow, Green)
*   **3x 220Ω Resistors** (for LEDs)
*   **Breadboard & Jumper Wires**

## 🔌 Circuit Connections

| Component | Arduino Pin |
| :--- | :--- |
| **Sensor VCC** | 5V |
| **Sensor GND** | GND |
| **Sensor Signal (S)** | A0 |
| **Red LED (Low)** | Digital Pin 2 |
| **Yellow LED (Mid)** | Digital Pin 3 |
| **Green LED (High)** | Digital Pin 4 |

*Note: Connect each LED anode to the pin through a 220Ω resistor and all cathodes to GND.*

3.  **Calibrate:** Run the code and check the **Serial Monitor** (9600 baud) to find the exact values when your sensor is dry, half-submerged, and fully submerged.
4.  Update the `lowThreshold`, `midThreshold`, and `highThreshold` in the code if needed.
