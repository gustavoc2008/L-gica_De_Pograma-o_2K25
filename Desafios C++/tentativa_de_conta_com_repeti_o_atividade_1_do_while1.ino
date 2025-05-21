// C++ code
//Variaveis
int numeroUsuario;
String resultado;
int contador;

void setup()
{
  Serial.begin(9600);
  
   do{
    Serial.println("Quanto eh 2 + 2?: ");
    while( ! Serial.available() ){}
    numeroUsuario = Serial.parseInt();
  
    int resultado = 4;
    
    if( numeroUsuario == resultado ){
    Serial.println("Sua resposta: " + String(numeroUsuario));
    Serial.println("Parabens!!!");
    }
    
    else{
    Serial.println("Sua resposta: " + String(numeroUsuario));
    Serial.println("Resposta Errada :(");
    }
     
    Serial.println("Quer Tentar Novamente? Digite (sim) (nao)");
    while( ! Serial.available() ){}
    
    if( Serial.readString() == "sim" ){
    Serial.println("Redirecionando voce para o comeco");
    } 
    
    else{
    Serial.println("OK, ate breve");
    }
  
  }
  while(resultado = 4);
     
}

void loop()
{
 
}
    
  
