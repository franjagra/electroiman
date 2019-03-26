int Pin = 10; 
void setup() {
  pinMode(Pin, OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(50);
}

void loop() {
  if (Serial.available())
   {
      char data = Serial.read();
      if (data == 'A' )
      {
         analogWrite(Pin, HIGH); 
         Serial.println(data);
         
                 
           
        
         
      }
      if (data == 'B' )
      {
         analogWrite(Pin, 112);
         Serial.println(data); 
      } 
      if (data == 'C' )
      {
         analogWrite(Pin, LOW);
         Serial.println(data); 
      } 
   }  

}
