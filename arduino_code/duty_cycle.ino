int val = 0;
int i = 0;

int on = 0;
int off = 0;
float dutyCycle = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  if( i >= 255) {
    delay(1000);
    dutyCycle = (float)on/(off+on);
    Serial.println(dutyCycle);
    i = 0;
    on = 0;
    off = 0;
  }
   
  val = analogRead(A0);

  if( val != 0 )
    on++;
  else
    off++;

  i++;
}
