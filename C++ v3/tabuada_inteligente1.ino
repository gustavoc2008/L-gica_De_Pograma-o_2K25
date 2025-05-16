// C++ code
//Variaveis
int tabuadaEscolhida;
int resultado;




void setup()
{
  Serial.begin(9600);
}

void loop()
{
 Serial.println("Digite o numero que deseja ver a tabuada");
  while( ! Serial.available() );
  tabuadaEscolhida = Serial.parseInt();
  
 Serial.println("Tabuada do numero: " + String(tabuadaEscolhida));
 Serial.println();

  for( int contador = 1; contador <= 10; contador++ ){
  
  resultado = tabuadaEscolhida * contador;
    
  Serial.print("Tabuada Escolhida:");
  Serial.print(tabuadaEscolhida);
  Serial.print("X");
  Serial.print(contador);
  Serial.print("=");
  Serial.println(resultado);




    
  
  
  
  }
  
  
  
  
}