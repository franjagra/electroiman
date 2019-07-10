
void setup() {
  Serial.begin(9600);
}

void loop() {

    float sensor_volt;
    float RS_gas; // Get value of RS in a GAS
    float ratio; // Get ratio RS_GAS/RS_air
    double LPG_PPM;
 
    int sensorValue = analogRead(A0);
 
    sensor_volt=(float)sensorValue/1024*5.0;
 
    RS_gas = (5.0-sensor_volt)/sensor_volt; // omit *RL /*-Replace the name "R0" with the value of R0 in the demo of First Test -*/
 
    ratio = RS_gas/0.1;  // ratio = RS/R0
    LPG_PPM=2264.64*pow(ratio, -2.055); 
    //Serial.print("LPG PPM = ");
    Serial.println(LPG_PPM);
    
    // Serial.print("   volt = ");
    //Serial.println(sensor_volt);
    //Serial.print("   ratio = ");
    //Serial.println(ratio);
    Serial.print("\n\n");
    delay(1000);
    //determina R0
   //float sensor_volt; 
   //float RS; //  Get the value of RS via in a clear air
  // float R0;  // Get the value of R0 via in LPG
   //float sensorValue;
 
  // for(int i = 0 ; i < 100 ; i++)
  // {
    //   sensorValue = sensorValue + analogRead(A0);
   //}
   // sensorValue = sensorValue/100.0;     //get average of reading
    //sensor_volt = sensorValue/1024*5.0;
   // RS = (5.0-sensor_volt)/sensor_volt; //
   // R0 = RS/10.0; // 10 is found using interpolation
   // Serial.print("R0 = ");
   // Serial.println(R0);
    //delay(1000);
  //calculo voltaje
  //int adc_MQ = analogRead(A0); //Lemos la salida analógica del MQ
  //float voltaje = adc_MQ * (5.0 / 1023.0); //Convertimos la lectura en un valor de voltaje

  //Serial.print("adc:");
    //Serial.print(adc_MQ);
  
  //Serial.print("  ");
 // Serial.print("    voltaje:");
 // Serial.println(voltaje);
  // Serial.print('\n');
 // delay(100);
}
