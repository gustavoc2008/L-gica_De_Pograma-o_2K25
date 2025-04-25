// C++ code
//Faça um programa que receba o nome, cargo e salário de um funcionário. Calcule o salário acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse funcionário.
String nome = " ";
String cargo = " ";
float salario = 0;
float novoSalario = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //Entrada
  Serial.println("Digite seu nome: ");
  while( !Serial.available() );
  nome = Serial.readString();
  
  Serial.println("Digite seu cargo: ");
  while( !Serial.available() );
  cargo = Serial.readString();
  
  Serial.println("Digite seu salario: ");
  while( !Serial.available() );
  salario = Serial.parseFloat();
  
  delay(500);
  
  //Processamento
  (novoSalario = salario * 1.10);
 
  
  //Saida
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.print("Novo Salario: R$" );
  Serial.println(novoSalario, 2);
  
  
}