// C++ code
//Faça um programa que receba a medida em polegadas e exiba esse número em centímetros.
float centimetros = 0;
float polegada = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite a medida em polegadas: ");
  while( !Serial.available() );
  polegada = Serial.parseFloat();
  
  delay(500);
  
  //Processamento
  centimetros = polegada * 2.54;
  
  //Saida
  Serial.println("Centimetros: " + String(centimetros));
  
}