// Uma empresa decide dar aumento de 30% aos funcionários cujo salário é
//inferior a 500 reais. Escreva um programa que receba o salário de um
//funcionário e imprima o valor do salário reajustado ou uma mensagem caso o
//funcionário não tenha direito a aumento.

//Variáveis
String nome = " ";
float salario = 0;
float salarioNovo = 0;


void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o nome do funcionario: ");
  while ( ! Serial.available() );
  nome = Serial.readString();
  
  Serial.println("Digite o salario: ");
  while( ! Serial.available() );
  salario = Serial.parseFloat();
  
  
  if( salario < 500){
    salarioNovo = (salario * 1.30);
    
    Serial.println("Seu nome: " + (nome));
    Serial.println("Seu Salario Novo: " + String(salarioNovo));
    
  }  
  else {
    Serial.println("Seu nome: " + (nome));
    Serial.println("Seu Salario: " + String(salario));
    
    
    
    
    delay(6000;
    
}
    
    
    
    
    
    
    
    
    
    
}