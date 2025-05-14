// C++ code
//Variaveis
int nota1 = 0;
int nota2 = 0;
int media = 0;
int resultado = 0;
float frequencia = 0;




void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //entrada
  Serial.println("Digite a primeira nota de 0 a 10: ");
  while( ! Serial.available() );
  nota1 = Serial.parseInt();
  
  Serial.println("Digite a segunda nota de 0 a 10: ");
  while( ! Serial.available() );
  nota2 = Serial.parseInt();
  
  Serial.println("Digite a frequencia: ");
  while( ! Serial.available() );
  frequencia = Serial.parseFloat();
  
  //processamento
  resultado = nota1 + nota2;
  
  media = resultado / 2;
  
  if( media >= 0 && media <= 5){
    Serial.println("Media: Reprovado");
  }
  else if( media >= 6 && media <= 9){
    Serial.println("Media: Aprovado");
  }
  else if( media = 10){
    Serial.println("Media: Aprovado, parabens nota MAXIMA!!!");
  }
  else{
    Serial.println("Dados nao estao corretos");
  }
  
  

  if( frequencia >= 75 && frequencia <= 99 ){
    Serial.println("Frequencia: Aprovado");
  }
  else if( frequencia == 100){
    Serial.println("Frequencia: Parabens, Frequencia MAXIMA!!!");
  }
  else if( frequencia < 75 ){
    Serial.println("Frequencia: Reprovado");
  }
  else{
    Serial.println("Dados nao estao corretos");
  }
  
  //saida
  Serial.println("Sua media: " + String(media));
  Serial.println("Sua frequencia: " + String(frequencia));
  
  
  
}