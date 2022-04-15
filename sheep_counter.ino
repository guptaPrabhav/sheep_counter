void setup()
{
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int sheep_in=0, sheep_out=10;
  if (digitalRead(7)==HIGH){
    delay(50);
    if (digitalRead(8)==HIGH){
    	sheep_in++;
      	sheep_out--;
    }	
  }
  
  if (digitalRead(8)==HIGH){
    delay(50);
    if (digitalRead(7)==HIGH){
    	sheep_in--;
      	sheep_out++;
    }	
  }
  
  Serial.println("-------------------------------");
  Serial.println("Number of sheep INSIDE fence is : ");
  Serial.println(sheep_in);
  Serial.println("Number of sheep OUTSIDE fence is : ");
  Serial.println(sheep_out);
  Serial.println("-------------------------------");
  delay(500);
}