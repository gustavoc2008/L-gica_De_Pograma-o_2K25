// C++ code
//variaveis
int n1;
int contador;

void setup()
{
  Serial.begin(9600);
  
  Serial.println("Digite um numero");
  while( ! Serial.available() );
  n1 = Serial.parseInt();
  
  for( contador = 0;contador <= n1;contador++){
  Serial.println("Contando: " + String(contador));
  }
  
}

void loop()
{
  
}