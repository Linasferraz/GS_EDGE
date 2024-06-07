# Integrantes: 
# Carolina Santana Ferraz   RM: 86833
# Melyssa Huang Gonçalves   RM: 558401

# Projeto de Medição de Temperatura e pH com Arduino (Boia sensorial) 

Este projeto utiliza um Arduino para medir a temperatura e o pH de um ambiente utilizando sensores TMP36 e um sensor de pH. Os dados são exibidos no Monitor Serial do Arduino.

* Componentes Necessários

1x Arduino Uno
1x Sensor de Temperatura TMP36
1x Sensor de pH
Jumpers (fios de conexão)
Protoboard

* Conexões

Sensor TMP36

Pino 1 (VCC) -> 5V no Arduino
Pino 2 (Saída) -> A1 no Arduino
Pino 3 (GND) -> GND no Arduino

Sensor de pH

Pino de saída -> A0 no Arduino
Outros pinos conforme a especificação do sensor

* Código

const int tempPin = A1; // TMP36
const int phPin = A0; // pH sensor 
float temperature, pHValue;

void setup() {
    // Start serial communication 
   Serial.begin(9600);
 }

 void loop() { 
    // Read temperature from TMP36
   int tempReading = analogRead(tempPin); 
   float voltage = tempReading * (5.0 / 1024.0); 
   temperature = (voltage - 0.5) * 100; 

  // Read the pH sensor value 
  int phReading = analogRead(phPin); 
voltage = phReading * (5.0 / 1024.0);
 pHValue = 3.5 * voltage;
  // Simplified for simulation

 // Print the results to the Serial Monitor 
Serial.print("Temperature: "); 
Serial.print(temperature); 
Serial.print(" °C");
 Serial.print("\t pH: "); 
Serial.println(pHValue);
 // Delay before the next reading
 delay(2000); }

* Como Usar
<img width="1136" alt=<img width="1136" alt="TINKER" src="https://github.com/Linasferraz/GS_EDGE/assets/161864076/d462d6c3-0974-4861-b0d6-ed1fb30c8e86">

Conecte os sensores conforme a imagem acima.

Carregue o código no Arduino.
Abra o Monitor Serial e defina a taxa de transmissão para 9600 baud.
Inicie a simulação ou conecte o Arduino ao seu computador para começar a visualizar as leituras de temperatura e pH. Ele irá apresentar a temperatura e o pH da água e retornará os valores em seu Serial Monitor, sendo assim, possibilitando o monitoramento dos oceanos.

