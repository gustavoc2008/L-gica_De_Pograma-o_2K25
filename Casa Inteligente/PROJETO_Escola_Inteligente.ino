//Bibliotecas
#include <DHT.h>
#include <DHT_U.h>
#include <DHT11.h>
#include <LiquidCrystal_I2C.h>
#include <Servo.h>


//Variaveis -- acenderLEDAoDetectarPresenca
const int PIR = 2;
const int ledVerde = 13;

//Variaveis -- verificarVazamentoDeGas
const int MQ135 = A0;
const int buzzer = 12;

//Variaveis -- verificarTemperaturaEUmidade
#define DHTPINO A1
#define DHTTYPE DHT11

DHT dht(DHTPINO, DHT11);
LiquidCrystal_I2C lcd(0x27, 20, 4);


Servo motor;

void acenderLEDAoDetectarPresenca() {
  int estadoPIR = digitalRead(PIR);

  Serial.println(estadoPIR);

  if (estadoPIR == 1) {
    digitalWrite(ledVerde, HIGH);
    //delay(3000);
  }

  else {
    digitalWrite(ledVerde, LOW);
  }
}

void verificarVazamentoDeGas() {
  int estadoMQ135 = analogRead(MQ135);

  Serial.println(estadoMQ135);

  if (estadoMQ135 >= 400) {
    saidaDeSom();
  } else {
    noTone(buzzer);
  }
}

void saidaDeSom() {
  int freqAlta = 2000;
  int freqBaixa = 800;
  int duracaoTom = 250;

  tone(buzzer, freqAlta, duracaoTom);
  delay(duracaoTom);
  tone(buzzer, freqBaixa, duracaoTom);
  delay(duracaoTom);
}

void verficarTemperaturaEUmidade(){
  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  lcd.clear();//limpa o lcd
  lcd.setCursor(0, 0);// 0 = Primeira Linha
  lcd.print("Temperatura: " + String(temperatura) + "C");
  lcd.setCursor(0, 1);// 1 = Segunda Linha
  lcd.print("Umidade: " + String(umidade) + "%");


  //Serial.println("Temperatura: " + String(temperatura) + "C");
  //Serial.println("Umidade: " + String(umidade) + "%");
  delay(5000);

}

void abrirPortaAutomatica(){
  motor.write(180);
  delay(1500);
}

void fecharPortaAutomatica(){
  motor.write(0);
  delay(1500);

}

void setup() {
  Serial.begin(9600);

  dht.begin();
  lcd.init();

  lcd.backlight();

  pinMode(ledVerde, OUTPUT);
  pinMode(PIR, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(MQ135, INPUT);
  motor.attach(3);

  motor.write(0);


  Serial.println("Sensores sendo calibrados! Aguarde firme ein :b");
  delay(5000);
  Serial.println("Sensores calibrados! :b");

  lcd.setCursor(0, 0);
  lcd.print("Iniciando Leituras");
  lcd.setCursor(0, 1);
  lcd.print("Obrigado!");


}

void loop() {
  //acenderLEDAoDetectarPresenca();
  //verificarVazamentoDeGas();
  //verficarTemperaturaEUmidade();
  abrirPortaAutomatica();
  fecharPortaAutomatica();

}
