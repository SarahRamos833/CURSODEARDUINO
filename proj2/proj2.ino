//Programa Liga Led com botão
// variaveis que nunca mudam
const int pinoLED =  6;   // variavel para o Pino do Led
const int pinoBT = 7;     // variavel para o Pino do Botao

// variavel que muda
int estadoBT = 1;         // variavel para o estado inicial do Botao

void setup() {
  pinMode(pinoLED, OUTPUT); // define pino do led como saida
  pinMode(pinoBT, INPUT_PULLUP); //define pino do botao como entrada
}

void loop() {
  //variavel que recebe a leitura do pino do botao
  estadoBT = digitalRead(pinoBT);

  // se apertar o botao
  if (estadoBT == LOW) {
    digitalWrite(pinoLED, HIGH); //LED LIGADO
  } else {
    digitalWrite(pinoLED, LOW); //LED DESLIGADO
  }
}
