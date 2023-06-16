//Programa 1 - Pisca LED
void setup()
{
pinMode(6, OUTPUT); // define o pino 6 como saida
}

void loop()
{
digitalWrite(6, HIGH); // liga o pino 6
delay(500); // espera 500 milissegundos
digitalWrite(6, LOW); // desliga o pino 6
delay(500);
}
