// C++ code
//Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual. Calcule e imprima: a. A idade dessa pessoa b. Essa idade convertida em semana 
int ano = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemanas = 0;
  
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite seu ano de nascimento");
  while( ! Serial.available() );
  ano = Serial.parseInt();
  
  Serial.println("Digite o ano atual");
  while( ! Serial.available() );
  anoAtual = Serial.parseInt();
  
  //Procedimento
  idade = anoAtual - ano;
  idadeSemanas = idade * 52;
  
  
  //Saida
  Serial.println("Sua idade: " + String(idade));
  Serial.println("Sua idade em Semanas " + String(idadeSemanas));
 
    
}