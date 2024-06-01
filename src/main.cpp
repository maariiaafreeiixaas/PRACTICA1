#include <Arduino.h>

#define LED_BUILTIN 21 
//#define GPIO_OUT_REG (DR_REG_GPIO_BASE+Ox0004)
#define DELAY 500

//uint32_t *gpio_out = (uint32_ *)GPIO_OUT_REG;

void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
 //pinMode(21,OUTPUT);
 Serial.begin(115200);  
}
void loop() {
 digitalWrite(LED_BUILTIN, HIGH);
 //digitalWrite(21, LOW);
 //gpio_out|=(1<<23);
 Serial.println("ON");
 delay(DELAY);
 digitalWrite(LED_BUILTIN, LOW);
 //digitalWrite(21,HIGH);
 //gpio_out &=(1<<23);
 Serial.println("OFF");
 delay(DELAY);
}