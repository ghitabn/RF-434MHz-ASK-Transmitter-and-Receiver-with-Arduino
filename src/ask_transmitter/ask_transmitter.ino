/*------------------------------------------------------------------------------ 
Program:      ask_transmitter 

Description:  Slight variation of the original example code (included in the 
              RadioHead-1.74 library) for the ASK transmitter and receiver:
              simple example of how to use RadioHead to transmit messages
              with a simple ASK transmitter in a very simple way.
              Implements a simplex (one-way) transmitter with an TX-C1 module.

Hardware:     Standalone ATmega328P-PU/Arduino Uno R3, TWS-BS RF Transmitter Module 
              (434 MHz). Should work with other Arduinos 

Software:     Developed using Arduino 1.8.2 IDE

Libraries:    
              - RadioHead-1.74: 
                http://www.airspayce.com/mikem/arduino/RadioHead/
              - SPI(included with the Arduino IDE)

References: 
              - RadioHead Packet Radio library for embedded microprocessors:
              http://www.airspayce.com/mikem/arduino/RadioHead/

Date:         April 29, 2017

Author:       - RadioHead (http://www.airspayce.com/mikem/arduino/RadioHead/),
              modified by G. Gainaru, http://www.arduinolab.net
------------------------------------------------------------------------------*/

#include <RH_ASK.h>
#include <SPI.h> // Not actually used but needed to compile

// tx/rx configuration
const int txSpeed = 2000;
const int rxPin = 5;
const int txPin = 6;
const int pttPin = 7;

RH_ASK driver(txSpeed, rxPin, txPin, pttPin);

void setup()
{
  if (!driver.init())
    Serial.println("rf driver init failed");

  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  const char *msg = "hello world!";

  digitalWrite(LED_BUILTIN, HIGH);
  delay(50);
  digitalWrite(LED_BUILTIN, LOW);
  delay(50);
  driver.send((uint8_t *)msg, strlen(msg));
  driver.waitPacketSent();
  delay(200);
}
