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
