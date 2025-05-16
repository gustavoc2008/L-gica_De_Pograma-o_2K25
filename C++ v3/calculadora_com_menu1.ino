// C++ code
//Variveis
int chooseOfOperation;
float result;

void add( float number1Parameter, float number2Parameter){
  result = number1Parameter + number2Parameter;
  Serial.println("Your result: " + String(result));
  }

void subtract( float number1Parameter, float number2Parameter){
  result = number1Parameter - number2Parameter;
  Serial.println("Your result: " + String(result));
  }

float divide( float number1Parameter, float number2Parameter){
  result = number1Parameter / number2Parameter;
  return result;
  //Serial.println("Your result: " + String(result));
  }

float multiply( float number1Parameter, float number2Parameter){
  result = number1Parameter * number2Parameter;
  return result;
  }


 
void setup()
{
 Serial.begin(9600);
  
int counter = 0;  
float number1;
float number2;
  
  do{
    Serial.println("Welcome to Davi's Calculator\n");
    Serial.println("Choose one of the operations: ");
    Serial.println("1 - Add");
    Serial.println("2 - Subtract");
    Serial.println("3 - To Divide");
    Serial.println("4 - Multiply");
    while( ! Serial.available() ){}
    chooseOfOperation = Serial.parseInt();
    
    Serial.println("To perform the operation, enter two numbers");
    Serial.println("Enter the first number");
    while( ! Serial.available() ){}
    number1 = Serial.parseFloat();
    
    Serial.println("Enter the second number");
    while( ! Serial.available() ){}
    number2 = Serial.parseFloat();
    
    //if( chooseOfOperation == 1){}
    //else if( chooseOfOperation == 2){}
    //else if( chooseOfOperation == 3){}
    //else if( chooseOfOperation == 4){}
    //else{}
    
    switch( chooseOfOperation ){
        case 1:
          add(number1, number2);
          break;
      
        case 2:
          subtract(number1, number2);
          break;
      
        case 3:
          float returnDivideFunction;
          returnDivideFunction = divide(number1, number2);
          Serial.println("Your result: " + String(result));
          break;
       
        case 4:
          float returnMultiplyFunction;
          returnMultiplyFunction = multiply(number1, number2); 
          Serial.println("Your result: " + String(result));
          break;
      
        default:
          Serial.println("There is no such option: Choose an option between 1 and 4");
    }
     
    
    Serial.println("Do you want to return to the menu? Type Yes or No ");
     while( ! Serial.available() ){}
      
    if( Serial.readString() == "Yes" ){
      counter = 1;
    }
    else{
      counter = 0;
      
      Serial.println("Until later!!!");
      Serial.println("If you want to return to the menu, restart the program");
    }
  
  
  }
  while(counter != 0);
  
}

void loop()
{
 
}