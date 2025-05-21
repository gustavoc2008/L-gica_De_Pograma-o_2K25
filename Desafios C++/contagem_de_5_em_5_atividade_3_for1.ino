// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  for( int contador = 0; contador <= 50; contador+=5){
  Serial.println("Contando: " + String(contador));
  }
}

void loop()
{
  
}