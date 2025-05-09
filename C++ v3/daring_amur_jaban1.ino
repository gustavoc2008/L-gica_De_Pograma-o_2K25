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
  
  if ( idade >= 5 && idade < 8){
    Serial.println("Cadastro na Categoria Infantil");
  } else if( idade >= 8 && idade < 12 ){ 
    Serial.println("Cadastro na Categoria Cadete");
  } else if( idade >= 12 && idade < 15 ){
    Serial.println("Cadastro na Categoria Juvenil");
  } else if( idade >=15 && idade < 18 ){
    Serial.println("Cadastro na Categoria Junior");
  } else if( idade >= 18 ){
    Serial.println("Cadastro na Categoria Adulto");
  } else {
    Serial.println("Nao pode participar de esportes na academia do Davi");
  }
  
  Serial.println("Sua idade: " + String(idade));
}