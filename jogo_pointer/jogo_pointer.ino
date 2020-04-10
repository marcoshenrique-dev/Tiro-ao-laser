#include <PushButton.h>

#define point1 A0
#define point2 A1
#define point3 A2

#define led1 3
#define led2 4
#define led3 5
#define led4 6
#define led5 7
#define led6 8
#define led7 9
#define led8 10
#define botao 2 



int pontuacao = 0;

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

PushButton resetButton(botao);


void setup() {

  Serial.begin(9600);
  lcd.begin (16,2);

  pinMode(led1 , OUTPUT);
  pinMode(led2 , OUTPUT);
  pinMode(led3 , OUTPUT);
  pinMode(led4 , OUTPUT);
  pinMode(led5 , OUTPUT);
  pinMode(led6 , OUTPUT);
  pinMode(led7 , OUTPUT);
  pinMode(led8 , OUTPUT);


 
  

  
   lcd.setCursor(1,0);
 lcd.print("Bem vindo ao ");
lcd.setCursor(1,1);
 lcd.print("Tiro ao laser!");
 
 delay(3000);
 lcd.setBacklight(LOW);
 //LIGA O BACKLIGHT (LUZ DE FUNDO)
 delay(500);
 lcd.clear();

 lcd.setBacklight(HIGH); //LIGA O BACKLIGHT (LUZ DE FUNDO)

 lcd.setCursor(1,0);
 lcd.print("Se prepare ...");
 lcd.setCursor(1,1);
 lcd.print("Para o desafio!");

  delay(3000);

   lcd.clear();

 lcd.setCursor(4,0);
 lcd.print("Pontuacao :");
 lcd.setCursor(3,1);
 lcd.print("0");
  
}

void loop() {

  resetButton.button_loop();

  if(resetButton.pressed()){

    pontuacao = 0 ;

    lcd.setCursor(0,0);
 lcd.print("Pontuacao Zerada");
 lcd.setCursor(1,1);
 lcd.print("Aguardando...");
       
    delay(2000);

    lcd.clear();

    lcd.setCursor(4,0);
 lcd.print("Pontuacao : ");
 lcd.setCursor(3,1);
 lcd.print(pontuacao);
    
    
  }

  //100

  if(analogRead(point1) <= 100){

    pontuacao += 40;
    Serial.println("Você acertou! Ganhou 40 pontos");
    Serial.println(pontuacao);
     lcd.clear();

 lcd.setCursor(4,0);
 lcd.print("Pontuacao :");
 lcd.setCursor(3,1);
 lcd.print(pontuacao);
     digitalWrite(led1 , HIGH);
  digitalWrite(led2 , HIGH);
  digitalWrite(led3 , HIGH);
  digitalWrite(led4 , HIGH);
  
    delay(2000);
     digitalWrite(led1 , LOW);
  digitalWrite(led2 , LOW);
  digitalWrite(led3 , LOW);
  digitalWrite(led4 , LOW);
  
  }

   if(analogRead(point2) <= 100){

    pontuacao += 60;
    Serial.println("Você acertou! Ganhou 60 pontos");
    Serial.println(pontuacao);
    lcd.setCursor(4,0);
 lcd.print("Pontuacao :");
 lcd.setCursor(3,1);
 lcd.print(pontuacao);
    digitalWrite(led1 , HIGH);
  digitalWrite(led2 , HIGH);
  digitalWrite(led3 , HIGH);
  digitalWrite(led4 , HIGH);
  digitalWrite(led5 , HIGH);
  digitalWrite(led6 , HIGH);
 
    delay(2000);
     digitalWrite(led1 , LOW);
  digitalWrite(led2 , LOW);
  digitalWrite(led3 , LOW);
  digitalWrite(led4 , LOW);
  digitalWrite(led5 , LOW);
  digitalWrite(led6 , LOW);
 
  }

   if(analogRead(point3) <= 100){

    pontuacao += 80;
    Serial.println("Você acertou! Ganhou 80 pontos");
    Serial.println(pontuacao);
    lcd.setCursor(4,0);
 lcd.print("Pontuacao :");
 lcd.setCursor(3,1);
 lcd.print(pontuacao);
  digitalWrite(led1 , HIGH);
  digitalWrite(led2 , HIGH);
  digitalWrite(led3 , HIGH);
  digitalWrite(led4 , HIGH);
  digitalWrite(led5 , HIGH);
  digitalWrite(led6 , HIGH);
  digitalWrite(led7 , HIGH);
  digitalWrite(led8 , HIGH);
    delay(2000);
     digitalWrite(led1 , LOW);
  digitalWrite(led2 , LOW);
  digitalWrite(led3 , LOW);
  digitalWrite(led4 , LOW);
  digitalWrite(led5 , LOW);
  digitalWrite(led6 , LOW);
  digitalWrite(led7 , LOW);
  digitalWrite(led8 , LOW);
   
  }

  
}
