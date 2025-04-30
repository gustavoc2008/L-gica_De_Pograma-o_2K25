// C++ code
//
int idade = 0;
int idade2 = 0;



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

  
  
  if( idade >= 18 ){
    Serial.println("Maior de Idade");
  } else {
    Serial.println("Menor de Idade"); 
  }
  
  delay(2000);
}  