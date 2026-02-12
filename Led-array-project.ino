//Led Project With Arrays
//Ali Arda Kocabörek | Akdeniz EEE

int led_Pinleri[3] = {2,3,4},i;

void setup(){

  for(i=0;i<=2;i++){
    
    pinMode(led_Pinleri[i],OUTPUT);

  }
}

void loop(){

  for(i=0;i<=2;i++){

    digitalWrite(led_Pinleri[i],HIGH);

    delay(1500);

    digitalWrite(led_Pinleri[i],LOW);
  }
}
