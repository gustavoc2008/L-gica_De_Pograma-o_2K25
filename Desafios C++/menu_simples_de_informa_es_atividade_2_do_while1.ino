// C++ code
//Variaveis
int escolhaDoUsuario;
int sair;


void setup()
{
 Serial.begin(9600);
  
  do{
  Serial.println("Seja Bem Vindo(a) Ao Robo de Atendimento");
  Serial.println();
  
  Serial.println("Oque voce deseja ver?");
  Serial.println(" 1 - Ver Telefone ");
  Serial.println(" 2 - Ver Endereco ");
  Serial.println(" 3 - Sair ");
    while( ! Serial.available() ){}
    escolhaDoUsuario = Serial.parseInt();
  
  switch( escolhaDoUsuario ){
     case 1:
     Serial.println("Seu telefone eh: 7070-7070");
     break;
    
     case 2:
     Serial.println("Seu endereco eh: Rua Niterói 180 – São Caetano do Sul-SP.");
     break;
    
     case 3:
     Serial.println("Saindo do Robo de Atendimento");
     break;
     }
    
  Serial.println("Quer voltar ao menu? Digite (1-sim) (0-nao)");
    while( ! Serial.available() ){}
    
    if( Serial.readString() == "sim" ){
      sair = 1;
      Serial.println("Voltando para o menu");
    } 
    
    else{
      sair = 0;
    Serial.println("OK, ate breve");
    } 
    
    
    
    
    
  } 
  while( sair != 0 );
    
    
    
    
    
    
    
    
    
}
  
  
  
  
  


  


void loop()
{
  
}