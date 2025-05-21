// C++ code
//Variaveis
int numeroUsuario;

void setup()
{
  Serial.begin(9600);
  
  Serial.println("Digite um numero: ");
  while( ! Serial.available() );
  numeroUsuario = Serial.parseInt();
  
  int contador = 0;
  while( contador <= numeroUsuario ){
  Serial.println("Contando: " + String(contador));
  contador++;
  }
  
}

void loop()
{
  
}