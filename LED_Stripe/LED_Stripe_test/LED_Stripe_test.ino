#include <Seeed_led_stripe.h>
#define PIN 6
#define NUM_LEDS 15
#define Light 200

Led_Stripe test = Led_Stripe(NUM_LEDS, PIN, LED_GRB + DATA_800KHZ);
void setup() {
  // put your setup code here, to run once:
   test.led_light(Light);
   test.led_init();
   test.led_show();
}

void loop() {
  // put your main code here, to run repeatedly:
  color_change(test.RGB_Color(255, 0, 0),50);
  color_change(test.RGB_Color(0, 255,0),50);
  color_change(test.RGB_Color(0, 0, 255),50);
  color_change(test.RGB_Color(255, 255, 255),50);
}

void color_change(uint32_t c, uint8_t wait){
  for(uint16_t i=0; i<test.LED_NUM();i++){
    test.led_setRGBColor(i, c);
    test.led_show();
    delay(wait);
    }  
}
