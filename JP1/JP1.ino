#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 40

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 6


// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
      // Uncomment/edit one of the following lines for your leds arrangement.
      // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  	  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
      // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
      
      // FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, RGB>(leds, NUM_LEDS);

      // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);

      
      
}

void loop() { 
  // Turn the LED on, then pause
  for (int i=1; i < 40; i += 2){
      delay(100);
      leds[i] = CRGB::Green;
      FastLED.show();
      
   } 

   for (int i=0; i < 40; i += 2){
      delay(100);
      leds[i] = CRGB::White;
      FastLED.show();
      
   } 

   for (int i=1; i < 40; i += 2){
      delay(100);
      leds[i] = CRGB::Red;
      FastLED.show();
      
   } 

   for (int i=0; i < 40; i += 2){
      delay(100);
      leds[i] = CRGB::Blue;
      FastLED.show();
      
   } 
  for(int dot = 0; dot < 40; dot++) { 
            leds[dot] = CRGB::Blue;
            FastLED.show();
            delay(10);            
            // clear this led for the next time around the loop
            leds[dot] = CRGB::Black;
            delay(5);
         }
   for(int dot = 0; dot < 40; dot++) { 
            leds[dot] = CRGB::White;
            FastLED.show();
            delay(10);            
            // clear this led for the next time around the loop
            leds[dot] = CRGB::Black;
            delay(5);
         }
      

      
  
  
  // Now turn the LED off, then pause
 // leds[0] = CRGB::Black;
  //FastLED.show();
  //delay(500);
}
