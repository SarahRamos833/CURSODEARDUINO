//Programa que controla o brilho do LED com potenciometo
const int pinoLED =  6;   // variavel para o Pino do Led
const int pinoPOT = A0;     // variavel para o Pino do Potenciometro

void setup() {
  pinMode(pinoLED, OUTPUT); // define pino do led como saida
  pinMode(pinoPOT, INPUT); //define pino do botao como entrada
}

void loop() {
  //variavel que recebe a leitura do pino do botao + mapeamento
  int estadoPot = map(analogRead(pinoPOT), 0, 1023, 0, 10);
  
  digitalWrite(pinoLED, estadoPot); //LED ligado com o estadoPot
}
