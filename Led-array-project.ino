//Led Project With Arrays
//Ali Arda Kocabörek || Akdeniz EEE

#include <Arduino.h>       // Register erisimi icin

const int led_pinler[3]={2,3,4};


void ledyak(void);

int main(void){

  init();

  for(int i=0;i<3;i++){
    pinMode(*(led_pinler+i),OUTPUT);
  }

  ledyak();

}

void ledyak(void){

  int i=0;
  int led_sayisi=sizeof(led_pinler)/sizeof(*(led_pinler));

  while(1){

    for(i=0;i<led_sayisi;i++){

      digitalWrite(*(led_pinler+i),HIGH);
      delay(1000);
      digitalWrite(*(led_pinler+i),LOW);
      delay(1000);

    }
  }
}
