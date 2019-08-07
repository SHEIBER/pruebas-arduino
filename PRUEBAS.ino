
   const int boton1=3;
   const int boton2=2;
   const int led=13;
   int estado1=0;
   int estado2=0;
void setup() {
  pinMode(boton1,INPUT);
  pinMode(boton2, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  estado1= digitalRead(boton1);
  estado2=digitalRead(boton2);
  if (estado1==1){
      digitalWrite(led, 1);
      Serial.println("1");
    }
  else if (estado2==1){
      digitalWrite(led, 0);
      Serial.println("2");  
    }
  // put your main code here, to run repeatedly:

}
