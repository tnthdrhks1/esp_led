#define led 22
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {

  Serial.println("data : 101");

  Serial.println("hello world")
  
}
