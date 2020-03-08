int LED_BUILTIN = 2;

void setup() 
{
pinMode(LED_BUILTIN, OUTPUT);

}

void loop() 
{
digitalWrite(LED_BUILTIN, HIGH); // allume la LED avec le plus haut voltage
delay(500);
digitalWrite(LED_BUILTIN, LOW) ; // allume la LED avec le plus petit voltage
delay(1000);
}
