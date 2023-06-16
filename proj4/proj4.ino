//Programa sensor ultrassonico
#include <Ultrasonic.h> // Inclui biblioteca para usar o sensor ultrassônico
Ultrasonic ultrasonic(8, 9); // Passa pinos 8 e 9 como emissor e receptor

void setup() {
  Serial.begin(9600);
}

void loop() {
  //variavel par a distancia
  int dist = ultrasonic.read(CM);
  delay(1000);
  Serial.print("DIST.: "); //printa no monitor serial a distancia
  Serial.print(dist);
  Serial.println(" cm.");
}
