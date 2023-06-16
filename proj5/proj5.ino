//Programa que controla LED com modulo joystick
int horzPin = A0;  // Pino horizontal
int vertPin = A1;  // pino vertical

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(horzPin, INPUT);  
  pinMode(vertPin, INPUT); 
}

void loop()
{
  int valorVRx = analogRead(horzPin); //valor do eixo X
  int valorVRy = analogRead(vertPin); // valor do eixo Y

      if(valorVRx == 0)
    {
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
    }else{
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
    }
    if(valorVRx == 1023)
    {
       digitalWrite(7, HIGH);
    }else{
       digitalWrite(7, LOW);
    }
    if(valorVRy == 0)
    {
       digitalWrite(6, HIGH);
    }else{
       digitalWrite(6, LOW);
    }
    if(valorVRy == 1023) 
    {
       digitalWrite(5, HIGH);
    }else{
      digitalWrite(5, LOW);
    }

  
}
