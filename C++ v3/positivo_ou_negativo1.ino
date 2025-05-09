// Faça um programa que receba um número inteiro do usuário e informe se este
//número é positivo ou negativo.

//Variaveis
int numero = 0;



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero: ");
  while( ! Serial.available() );
  numero = Serial.parseInt();
  
  if( numero > 0 ){
    Serial.println("Seu numero e positivo");
  }
  
  else{
    Serial.println("Seu numero e negativo");
  }
  
}