// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  for( int contador = 0; contador <=100; contador++){
  Serial.println("Contando: " + String(contador));
  }
  
}

void loop()
{
  
}