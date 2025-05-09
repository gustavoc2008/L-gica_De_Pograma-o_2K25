// Faça um programa receba dois valores e imprima qual é o maior número
//digitado.

//Variaveis
float n1 = 0;
float n2 = 0;



void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero: ");
  while( ! Serial.available() );
  n1 = Serial.parseFloat();
  
  Serial.println("Digite o segundo numero: ");
  while( ! Serial.available() );
  n2 = Serial.parseFloat();
  
  
  if( n1 > n2 ){
    Serial.println("Esse numero e o maior: " + String(n1));
    Serial.println("Esse numero e o menor" + String(n2));
  }
  
    else{
    Serial.println("Esse numero e o maior: " + String(n2));
    Serial.println("Esse numero e o menor" + String(n1));
  }  
    
}