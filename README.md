# RF 434MHz ASK Transmitter and Receiver

## 1. Description

This tutorial shows how to establish a basic RF communication link using cost effective wireless modules (434 MHz transmitter and receiver). The use of low-cost RF modules could be practical in systems with multiple remote sensors and/or other remote devices. On the other hand, this type of modules do not offer advanced security features as it might be the case for the more expensive RF modules.

Difficulty level: beginner.

## 2. Parts

* Transmitter:
    * 1 x Standalone ATmega328P-PU w Reset Button and LED (or Arduino Uno R3);
    * 1 x TWS-BS RF Transmitter Module (434 MHz);
    * Breadboard + wires.

* Receiver:
    * 1 x Arduino Uno R3;
    * 1 x RWS-371 RF Receiver Module (434 MHz);
    * Breadboard + wires.

Note. RF modules (transmitter and receiver) at other frequencies (i.e. 315 MHz) could be used as long as they match each other.

## 3. Schematics

* Transmitter:

![RF 434MHz ASK Transmitter schem!](/res/rf_434mhz_ask_transmitter_schem.jpg "RF 434MHz ASK Transmitter schem")

* Receiver:

![RF 434MHz ASK Receiver schem!](/res/rf_434mhz_ask_receiver_schem.jpg "RF 434MHz ASK Receiver schem")

## 4. Assembly (breadboard)

* Transmitter:

![RF 434MHz ASK Transmitter bboard!](/res/rf_434mhz_ask_transmitter_bboard.jpg "RF 434MHz ASK Transmitter bboard")

* Receiver:

![RF 434MHz ASK Receiver bboard!](/res/rf_434mhz_ask_receiver_bboard.jpg "RF 434MHz ASK Receiver bboard")

## 5. Code

The code implements a minimalist RF communication link between the two microcontrollers. It uses the RadioHead-1.74 library and is basically a slight variation of the original example code (included in the library) for the ASK transmitter and receiver.

* ask_transmitter.ino: to be uploaded into transmitter’s microcontroller:
* ask_receiver.ino: to be uploaded into receiver’s microcontroller:

## 6. Demo

Youtube link:  [RF 434MHz ASK Transmitter and Receiver](https://www.youtube.com/watch?v=B8Bpf3lDkJ4)

## 7. Additional resources

* Libraries:
    * RadioHead-1.74: http://www.airspayce.com/mikem/arduino/RadioHead/

* References:
    * RadioHead Packet Radio library for embedded microprocessors: http://www.airspayce.com/mikem/arduino/RadioHead/
    * RadioHead RH_ASK Class Reference
    http://www.airspayce.com/mikem/arduino/RadioHead/classRH__ASK.html