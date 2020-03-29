
void setup(){
    pinMode(2, INPUT_PULLUP);
    }

void loop(){
    int a = 5-10 ;
    if (digitalRead(2) == 0) {
    digitalWrite(a, 1) ;
    delay(3000) ;
    digitalWrite(a, 0) ;
   }
}