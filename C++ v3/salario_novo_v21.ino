// Faça um programa que receba o nome, cargo e salário de um funcionário. Se o
//ncionário ganhar abaixo de 1000 reais, calcule o salário acrescido de 10%.
// final exiba o nome, o cargo e o salário desse funcionário.

//Variavéis

String nome = " ";
String cargo = " ";
float salario = 0;
float salarioNovo = 0;

void setup()
{
Serial.begin(9600);  
}

void loop()
{
  Serial.println("Digite seu nome: ");
  while( ! Serial.available() );
  nome = Serial.readString();
  
  Serial.println("Digite seu cargo: ");
  while( ! Serial.available() );
  cargo = Serial.readString();
  
  Serial.println("Digite seu salario: ");
  while( ! Serial.available() );
  salario = Serial.parseFloat();
  
  
  if (salario < 1000){
    salarioNovo = (salario * 1.10);
  
  Serial.println("Seu nome: " + (nome));
  Serial.println("Seu cargo: " + (cargo));
  Serial.println("Seu salario Novo: " + String(salarioNovo));
  
  }        
  else {
  Serial.println("Seu nome: " + (nome));
  Serial.println("Seu cargo: " + (cargo));
  Serial.println("Seu salario: " + String(salario));
  }              
  
 
  
  
  
 
  
  delay (10000);
}