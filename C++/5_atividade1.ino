// C++ code
//Faça um programa que receba a medida em centímetros e exiba esse número em polegadas. OBS: Uma polegada equivale a 2.54 centímetros.
float centimetros = 0;
float polegada = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite a medida em centimetros: ");
  while( !Serial.available() );
  centimetros = Serial.parseInt();
  
  delay(500);
  
  //Processamento
  polegada = centimetros / 2.54;
  
  //Saida
  Serial.println("Polegadas: " + String(polegada));
  
}