// C++ code
//

int buttonPin = 2;
int vermelhoPin =11;
int amareloPin = 12;
int verdePin = 13;
int verdePed = 10;
int vermelhoPed = 9;
int estadoButton = 0;

void setup()
{
  pinMode(vermelhoPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(amareloPin, OUTPUT);
  pinMode(verdePin, OUTPUT);
  pinMode(verdePed, OUTPUT);
  pinMode(vermelhoPed, OUTPUT);
  
  
}

void loop()
{
  
  estadoButton = digitalRead(buttonPin);
  
  if(estadoButton == HIGH ){
    
    digitalWrite(verdePin, HIGH);
    digitalWrite(vermelhoPin, LOW);
    digitalWrite(vermelhoPed, HIGH);
    
  }
  
  else{
    delay(5000);
    digitalWrite(verdePin, LOW);
    digitalWrite(amareloPin,HIGH);
    
    delay(5000);
    digitalWrite(amareloPin, LOW);
    digitalWrite(vermelhoPin, HIGH);
    digitalWrite(vermelhoPed, LOW);
    digitalWrite(verdePed, HIGH);
    
    delay(5000);
    
    digitalWrite(verdePed, LOW);
    digitalWrite(vermelhoPed, HIGH);
    
    delay(1000);
    
    digitalWrite(vermelhoPed, LOW);
    
    delay(1000);
    
    digitalWrite(vermelhoPed, HIGH);
    
    delay(1000);
    
    digitalWrite(vermelhoPed, LOW);
    delay(1000);
    
    digitalWrite(vermelhoPin, LOW);
    digitalWrite(verdePin, HIGH);
    digitalWrite(vermelhoPed, HIGH);
    digitalWrite(verdePed, LOW);
    
  }
  
}