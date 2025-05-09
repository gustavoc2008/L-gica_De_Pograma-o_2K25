// Faça um programa que receba um número inteiro do usuário e informe se este
//número é positivo ou negativo.

//Variáveis
int numero = 0;



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite seu numero: ");
  while( ! Serial.available() );
  numero = Serial.parseInt();
  
  if(numero % 2==0){
    Serial.println("Seu numero e par: " + String(numero));
  }
  
  else{
      Serial.println("Seu numero e impar: " + String(numero));
    
  }
  
}