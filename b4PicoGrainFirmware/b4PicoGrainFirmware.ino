// b4PicoControl firmware by Malte Steiner, 2023
// not much to see here, the heavy lifting is actually done by the library 
// https://github.com/tttapa/Control-Surface


#include <Control_Surface.h>

// The MIDI over USB interface to use
USBMIDI_Interface midi;

// Instantiate an array of CCPotentiometer objects
CCPotentiometer potentiometers[] {
  {A1,        // Analog pin connected to potentiometer 1
   0x10},     // Controller number of the first potentiometer
  {A2,        // Analog pin connected to potentiometer 2
   0x11},     // Controller number of the second potentiometer
  {A3, 0x12}, // Etc.
  {A4, 0x13},
  {A6, 0x14}
};

void setup() {
  Control_Surface.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  Control_Surface.loop();
}
