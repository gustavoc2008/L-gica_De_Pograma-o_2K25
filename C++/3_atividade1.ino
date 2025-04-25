   // C++ code
//Faça um programa que receba um número e exiba o seu dobro.
int numero = 0;
int numeroDobro = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite um numero: ");
  while( !Serial.available());
  numero = Serial.parseInt();
  
  //Processamento
  numeroDobro = numero * 2;

  //Saida
  Serial.println("Seu numero em dobro: " + String(numeroDobro));
  
  delay(1000);
}