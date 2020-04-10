
#include <PushButton.h>

#define laser 2
#define botao 3
#define alert 4


PushButton addTiro(botao);


byte tiros = 3;


void setup() {

    pinMode(laser , OUTPUT);
    pinMode(alert , OUTPUT);
    digitalWrite(laser , LOW);

    Serial.begin(9600);


}

void loop() {
 

  addTiro.button_loop();

  if(addTiro.pressed()){

      Serial.println("Voçê atirou");
      tiros --;
      Serial.println(tiros);
      digitalWrite(laser , HIGH);
       delay(1000);
       digitalWrite(laser , LOW);

     
    
  }

 if(tiros <= 0) {
        tiros=3;
        digitalWrite(alert , HIGH);
        delay(1000);
        digitalWrite(alert , LOW);
      }
  

}
