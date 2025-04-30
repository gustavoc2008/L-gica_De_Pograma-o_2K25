// C++ code
//
int n1 = 0;
int n2 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Qual a sua nota: ");
  while( !Serial.available() );
  n1 = Serial.parseInt();
  Serial.println("Nota: " + String(n1));
  
  
  if( n1 >= 6 ){
    Serial.println("Aprovado");
  } else {
    Serial.println("Reprovado"); 
  }
  
  delay(2000);
}  