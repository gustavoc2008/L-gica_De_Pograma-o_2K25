// C++ code
//Variaveis
int idade = 0;


void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite sua idade: ");
  while( ! Serial.available() );
  idade = Serial.parseInt();
  
  if ( idade >= 0 && idade < 9){
    Serial.println("Apenas Filmes Infantis");
  } else if( idade >= 10 && idade <= 13 ){ 
    Serial.println("Filmes Infantis e Infantojuvenis");
  } else if( idade >= 14 && idade <= 17 ){
    Serial.println("Filmes ate classificacao 14 anos");
  } else if( idade >=18 && idade <= 59 ){
    Serial.println("Todos os tipos de filmes");
  } else if( idade >= 60 && idade <= 120 ){
    Serial.println("Todos os tipos de filmes + desconto para idosos");
  } else{
    Serial.println("Idade Invalida, verifique os dados");
  }
  
  
  Serial.println("Sua idade: " + String(idade));
}