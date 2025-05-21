// C++ code
//Variveis
\


void setup()
{
  Serial.begin(9600);
  
  int contador = 0;
  while (contador <=100){
  Serial.println("Contando: " + String(contador));
  contador++;
  
  }
}

void loop()
{
 
}