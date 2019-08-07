#include "notas.h"
int melodia[]={AS5, C6, CS6, PAUSA,PAUSA,PAUSA, D6, CS6, C6, C6, F6, F6, C6, C6, C6,PAUSA, PAUSA, D6, C6, AS5, AS5, AS5};
int duracion[]={4,4,4,1,1,1,4,4,1,1,1,1,1,1,1,4,4,4,4,1,1,1 };
void setup() {
  const int pinsonido = 11;
  int taman=sizeof(melodia)/sizeof(int);
  for (int esanota = 0; esanota < taman; esanota++){
    int duracionesanota=1000/duracion[esanota];
    tone(pinsonido,melodia[esanota],duracionesanota);
    delay(duracionesanota);
    noTone(pinsonido);
  }
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
