#include <Servo.h>
Servo seta;

int led_n = 2;
int led_l = 3;
int led_s = 4;
int led_o = 5;

int botao = 6;
int est_bot =0;

int buzzer = 8;
int pot = A1;
int valor;
int estado_seta;
int i = 0;

int oeste = 0;
int leste = 0;
int sul = 0;
int norte = 0;

bool dentro = false;

void setup()
{
  for( i = 2; i > 8; ++i); {
  
  pinMode (i, OUTPUT);

  //if(i == 6) {
   //pinMode(i, INPUT); 
  //}
  
}
  
pinMode(botao, INPUT_PULLUP);
pinMode(pot, INPUT);
seta.attach(7);  
Serial.begin (9600);
int estado_bot = 0;
}
void loop()
{

 est_bot = digitalRead(botao);
 Serial.println(est_bot);
 valor = analogRead(pot);
 valor = map(valor, 0, 1023, 0, 180);
 seta.write(valor);
 Serial.println(valor);
  
  if(valor < 45 && valor > 30){
    oeste = valor;
  Serial.println("TÀ NO OESTE!");
    dentro = true;
    
    if(est_bot == HIGH){
      digitalWrite(led_o, HIGH);
        tone(buzzer,900);
        delay(700);
        noTone(buzzer);
    }
    dentro = false;
  }
  delay(50);
  digitalWrite(led_o, LOW);
  
  if ( valor < 90 && valor > 75){
    norte = valor;
  Serial.println("TÀ NO NORTE!");
    dentro = true;
    
    if (est_bot == HIGH) {
      digitalWrite(led_n, HIGH);
        delay(100);
        tone(buzzer,900);
        delay(200);
        noTone(buzzer);
    }
    dentro = false;
  }
  delay(50);
  digitalWrite(led_n, LOW);
  
  if ( valor < 135 && valor > 120){
    leste = valor;
  Serial.println("TÀ NO LESTE!");
    dentro = true;
    
    if(est_bot == HIGH){
      digitalWrite(led_l, HIGH);
        delay(100);
        tone(buzzer,900);
        delay(200);
        noTone(buzzer);
    }
    dentro = false;
  }
  delay(50);
  digitalWrite(led_l, LOW);
  
  if (valor <180 && valor > 165 ){
    sul = valor;
  Serial.println("TÀ NA CASA DE LUSCASSSSS!");
      dentro = true;
    
    if (est_bot == HIGH) {
      digitalWrite(led_s, HIGH);
        delay(100);
        tone(buzzer,900);
        delay(200);
        noTone(buzzer);
    }
    dentro = false;
  }
  delay(50);
  digitalWrite(led_s, LOW);
  
  if  (est_bot == HIGH && dentro == false) {
  Serial.println("Som");
  tone(buzzer, 763, 200);
    
  }
  estado_seta = digitalRead(valor);
}
