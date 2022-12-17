 void setup()   
  {   
  pinMode(12,OUTPUT); // RELAY PIN   
  digitalWrite(12,HIGH); // Normally ON Only For Chanies Relay Module   
  }   
  void loop()    
  {   
  digitalWrite(12,LOW); // RELAY ON   
  delay(1000);   
  digitalWrite(12,HIGH); // RELAY OFF   
  delay(1000);   
  }   