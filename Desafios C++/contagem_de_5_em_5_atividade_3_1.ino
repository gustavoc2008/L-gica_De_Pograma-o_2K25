// C++ code
//
void setup()
{
  Serial.begin(9600);
  
  int contador = 0;
  while( contador <= 50){
  Serial.println("Contando: " + String(contador));
  contador+= 5;
  
  }
  
  
}

void loop()
{
  
}