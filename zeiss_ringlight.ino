#include "math.h"
//double 	pow (double __x, double __y) // x to power of y

void setup(){
}

int pot = A1;
int val;
int led = 0;
int brilho;


void loop(){

  val = analogRead(pot);
  
  brilho = round( (pow (2, (val+1)/32 ))/4/*-1*/); // x to power of y // a rough normalizing for eye sensitivity
  brilho = map(brilho, 0, 1023, 128, 255);
  constrain(brilho, 128, 255);

  analogWrite(led, brilho);
  delay(10);
}

