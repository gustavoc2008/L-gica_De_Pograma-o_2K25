// C++ code
//
int idade = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual a sua idade?: ");
  while( !Serial.available() );
  idade = Serial.parseInt();
  Serial.println("Idade: " + String(idade));
  
  if( idade >= 16 ){
    Serial.println("Voto Obrigatorio");
  } else {
    Serial.println("Sem Idade para Votar"); 
  }
  
  delay(1000);
}  
