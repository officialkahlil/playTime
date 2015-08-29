                       

int Relay =7;                       
void setup()

{    


Serial.begin(9600);
  pinMode(Relay, OUTPUT);  //Set Pin Output       

}

  void loop()

{

   digitalWrite(Relay,HIGH);           // Turns OFF Relays 1
   Serial.println("Light Off");
   delay(2000);                                      // Wait 2 seconds

   digitalWrite(Relay,LOW);          // Turns Relay ON
   Serial.println("Light ON");
   delay(2000);
   
}
