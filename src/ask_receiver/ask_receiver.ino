/*------------------------------------------------------------------------------ 
Program:      ask_receiver

Description:  Slight variation of the original example code (included in the 
              RadioHead-1.74 library) for the ASK transmitter and receiver:
              simple example of how to use RadioHead to transmit messages
              with a simple ASK transmitter in a very simple way.
              Implements a simplex (one-way) transmitter with an TX-C1 module.

Hardware:     Standalone ATmega328P-PU/Arduino Uno R3, RWS-371 RF Receiver Module 
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
              modified by Gheorghe G., http://www.arduinolab.net
------------------------------------------------------------------------------*/

#include <RH_ASK.h>
#include <SPI.h> // Not actualy used but needed to compile

// tx/rx configuration
const int txSpeed = 2000;
const int rxPin = 5;
const int txPin = 6;
const int pttPin = 7;

RH_ASK driver(txSpeed, rxPin, txPin, pttPin);

void setup()
{
  Serial.begin(9600);	// Debugging only
  if (!driver.init())
    Serial.println("init failed");
}

void loop()
{
  uint8_t buf[RH_ASK_MAX_MESSAGE_LEN] = {0};
  uint8_t buflen = sizeof(buf);

  if (driver.recv(buf, &buflen)) // if message received, save it
  {
    Serial.println((char*)buf); // print received message
  }
}
