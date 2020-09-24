#define LED 22
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by
 
// setting PWM properties
const int freq = 5000;
const int ledChannel = 2;
const int resolution = 10; //Resolution 8, 10, 12, 15
 
//=======================================================================
//                    Power on setup
//=======================================================================
void setup() {
  pinMode(LED,OUTPUT);
  
  // configure LED PWM functionalitites
  ledcSetup(ledChannel, freq, resolution);
  
  // attach the channel to the GPIO2 to be controlled
  ledcAttachPin(LED, ledChannel);
}
 
//=======================================================================
//                    Main Program Loop
//=======================================================================
void loop() {
  
  //PWM Value varries from 0 to 1023  
  while(1)
  {
      digitalWrite(LED, HIGH);

      hahahaha
  }
}
