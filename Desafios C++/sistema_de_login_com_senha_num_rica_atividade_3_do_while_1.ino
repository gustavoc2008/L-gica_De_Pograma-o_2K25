// C++ code
//variaveis
int senhaUsuario;
int senhaReal;
int contador;
int tentativas = 0;

void setup()
{
  Serial.begin(9600);
  
  do{
  
    Serial.println("Digite a senha: ");
    while( ! Serial.available() ){}
    senhaUsuario = Serial.parseInt();
    
    if( senhaUsuario == 1234 ){
    Serial.println("Login efetuado com sucesso");
    tentativas = 0;
    }
    
    else{
    tentativas++;
    Serial.println("Senha incorreta. Tente novamente!");
    }
    
    while( tentativas == 3 ){
    tentativas++;
    Serial.println("Acesso Bloqueado por 2 Minutos");
    delay(20000);
    }
      
    Serial.println("Deseja tentar novamente? Digite (sim) (nao)");
    while( ! Serial.available() ){}
    if( Serial.readString() == "sim"){
    Serial.println("Voltando...");
    }
    
    else{
    
    Serial.println("Saindo do programa...");
    }
    
   
    
    
  }
  while( senhaReal = 1234 );
}

void loop()
{
    
}