## Flex Sensor Connections

The diagram below illustrates how to connect the flex sensors to the Arduino Uno:

1. **Flex Sensor**: The flex sensor is connected to the **Analog Input Pins (A0 to A3)** of the Arduino Uno to measure the bending of the sensor.
2. **10k Resistor**: A pull-down resistor of 10kΩ is used to stabilize the output voltage from the flex sensor.
3. **Wiring**:
   - One terminal of the flex sensor is connected to the **Analog Input Pin** of the Arduino.
   - The other terminal is connected to **5V (Power)**.
   - The 10kΩ resistor is placed between the flex sensor and **Ground (GND)**.

This setup allows the Arduino to read analog voltage variations caused by bending the flex sensor and translate them into usable data for gesture recognition.

### Diagram

![Screenshot 2025-01-03 192102](https://github.com/user-attachments/assets/a02b7179-27d4-4060-9041-15f0149dbd48)

*Fig. 1: Flex Sensor Connections with Arduino Uno*

---

### Note:
- Ensure proper connections to avoid short circuits.
- Verify that the Arduino's Analog pins (A0-A3) are correctly assigned in the code.

  
## Bluetooth Connections:

## Wiring:
- *VCC: Connect the VCC pin of the Bluetooth module to the **5V (Power)* pin of the Arduino Uno.
- *GND: Connect the GND pin of the Bluetooth module to the **GND* pin of the Arduino Uno.
- *TXD: Connect the TXD (Transmit Data) pin of the Bluetooth module to the **RX (Digital Pin 0)* of the Arduino Uno.
- *RXD: Connect the RXD (Receive Data) pin of the Bluetooth module to the **TX (Digital Pin 1)* of the Arduino Uno.

## Diagram:
![Screenshot 2025-01-03 192122](https://github.com/user-attachments/assets/257451ab-ddb1-4a47-b4a0-a2dd4dfb2c71)


*Fig. 4*: Bluetooth Module Connections with Arduino Uno

---

## Notes:
1. Ensure that the RX and TX pins are connected correctly to avoid communication issues.
2. Avoid uploading new code to the Arduino Uno while the Bluetooth module is connected to RX and TX (Digital Pins 0 and 1). Disconnect the Bluetooth module or use software serial for programming.
3. Verify the baud rate in the code matches the default baud rate of the Bluetooth module (commonly 9600).
