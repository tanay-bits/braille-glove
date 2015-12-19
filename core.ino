byte pushbutton = 5;
byte feedback = 14; 
int inByte = 0;	// for incoming serial data
int motorPins[] = {9,10,11,19,13,12};       // an array of pin numbers to which motors are attached
volatile byte flag = LOW;

String glyph = "";
char dot;

void setup() {
        for (int thisPin = 0; thisPin < 6; thisPin++)  {
          pinMode(motorPins[thisPin], OUTPUT);
          digitalWrite(motorPins[thisPin], LOW);      
        }
	Serial.begin(9600);	// opens serial port, sets data rate to 9600 bps
        pinMode(pushbutton, INPUT_PULLUP);
        attachInterrupt(pushbutton, next, FALLING);
        pinMode(feedback, OUTPUT);
        digitalWrite(feedback, LOW);
}

void loop() {

	// send data only when you receive data:
	if (Serial.available() > 0) {
		// read the incoming byte:
		inByte = Serial.read();

		//say what you got:
		//Serial.print("I received: ");
		Serial.write(inByte);
                switch (inByte) {
                case 'a':    
                  digitalWrite(9, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  break;
                case 'b':    
                  digitalWrite(9, HIGH);
                  digitalWrite(10, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(10, LOW);
                  break;
                case 'c':    
                  digitalWrite(9, HIGH);
                  digitalWrite(19, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(19, LOW);
                  break;
                case 'd':    
                  digitalWrite(9, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(13, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(13, LOW);
                  break;
                case 'e':    
                  digitalWrite(9, HIGH);
                  digitalWrite(13, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(13, LOW);
                  break;
                case 'f':    
                  digitalWrite(9, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(10, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(10, LOW);
                  break;
                case 'g':    
                  digitalWrite(9, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(13, HIGH);
                  digitalWrite(10, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(13, LOW);
                  digitalWrite(10, LOW);
                  break;
                case 'h':    
                  digitalWrite(9, HIGH);
                  digitalWrite(10, HIGH);
                  digitalWrite(13, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(10, LOW);
                  digitalWrite(13, LOW);
                  break;
                case 'i':    
                  digitalWrite(10, HIGH);
                  digitalWrite(19, HIGH);
                  delay(500);
                  digitalWrite(10, LOW);
                  digitalWrite(19, LOW);
                  break;
                case 'j':    
                  digitalWrite(10, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(13, HIGH);
                  delay(500);
                  digitalWrite(10, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(13, LOW);
                  break;
                case 'k':    
                  digitalWrite(9, HIGH);
                  digitalWrite(11, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(11, LOW);
                  break;
                case 'l':    
                  digitalWrite(9, HIGH);
                  digitalWrite(10, HIGH);
                  digitalWrite(11, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(10, LOW);
                  digitalWrite(11, LOW);
                  break;
                case 'm':    
                  digitalWrite(9, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(11, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(11, LOW);
                  break;
                case 'n':    
                  digitalWrite(9, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(13, HIGH);
                  digitalWrite(11, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(13, LOW);
                  digitalWrite(11, LOW);
                  break;
                case 'o':    
                  digitalWrite(9, HIGH);
                  digitalWrite(13, HIGH);
                  digitalWrite(11, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(13, LOW);
                  digitalWrite(11, LOW);
                  break;
                case 'p':    
                  digitalWrite(9, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(10, HIGH);
                  digitalWrite(11, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(10, LOW);
                  digitalWrite(11, LOW);
                  break;
                case 'q':    
                  digitalWrite(9, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(13, HIGH);
                  digitalWrite(10, HIGH);
                  digitalWrite(11, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(13, LOW);
                  digitalWrite(10, LOW);
                  digitalWrite(11, LOW);
                  break;
                case 'r':    
                  digitalWrite(9, HIGH);
                  digitalWrite(10, HIGH);
                  digitalWrite(11, HIGH);
                  digitalWrite(13, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(10, LOW);
                  digitalWrite(11, LOW);
                  digitalWrite(13, LOW);
                  break;
                case 's':    
                  digitalWrite(10, HIGH);
                  digitalWrite(11, HIGH);
                  digitalWrite(19, HIGH);
                  delay(500);
                  digitalWrite(10, LOW);
                  digitalWrite(11, LOW);
                  digitalWrite(19, LOW);
                  break;
                case 't':    
                  digitalWrite(10, HIGH);
                  digitalWrite(11, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(13, HIGH);
                  delay(500);
                  digitalWrite(10, LOW);
                  digitalWrite(11, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(13, LOW);
                  break;
                case 'u':    
                  digitalWrite(9, HIGH);
                  digitalWrite(11, HIGH);
                  digitalWrite(12, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(11, LOW);
                  digitalWrite(12, LOW);
                  break;
                case 'v':    
                  digitalWrite(9, HIGH);
                  digitalWrite(10, HIGH);
                  digitalWrite(11, HIGH);
                  digitalWrite(12, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(10, LOW);
                  digitalWrite(11, LOW);
                  digitalWrite(12, LOW);
                  break;
                case 'w':    
                  digitalWrite(19, HIGH);
                  digitalWrite(13, HIGH);
                  digitalWrite(12, HIGH);
                  digitalWrite(10, HIGH);
                  delay(500);
                  digitalWrite(19, LOW);
                  digitalWrite(13, LOW);
                  digitalWrite(12, LOW);
                  digitalWrite(10, LOW);
                  break;
                case 'x':    
                  digitalWrite(9, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(11, HIGH);
                  digitalWrite(12, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(11, LOW);
                  digitalWrite(12, LOW);
                  break;
                case 'y':    
                  digitalWrite(9, HIGH);
                  digitalWrite(19, HIGH);
                  digitalWrite(13, HIGH);
                  digitalWrite(12, HIGH);
                  digitalWrite(11, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(19, LOW);
                  digitalWrite(13, LOW);
                  digitalWrite(12, LOW);
                  digitalWrite(11, LOW);
                  break;
                case 'z':    
                  digitalWrite(9, HIGH);
                  digitalWrite(13, HIGH);
                  digitalWrite(12, HIGH);
                  digitalWrite(11, HIGH);
                  delay(500);
                  digitalWrite(9, LOW);
                  digitalWrite(13, LOW);
                  digitalWrite(12, LOW);
                  digitalWrite(11, LOW);
                  break;
                case ' ':
                  delay(500);
                  break;
                case '?':    
                  digitalWrite(10, HIGH);
                  digitalWrite(11, HIGH);
                  digitalWrite(12, HIGH);
                  delay(500);
                  digitalWrite(10, LOW);
                  digitalWrite(11, LOW);
                  digitalWrite(12, LOW);
                  break;
                  }
             delay(1000);
                
	}

           if(analogRead(A0)==0){
            dot = '1';
            glyph.concat(dot);
            digitalWrite(feedback, HIGH);
            delay(500);
            digitalWrite(feedback, LOW);
            }
            
//            if(analogRead(A3)==0){
//            dot = '2';
//            glyph.concat(dot);
//            digitalWrite(feedback, HIGH);
//            delay(500);
//            digitalWrite(feedback, LOW);
//            } 
            
            if(analogRead(A4)==0){
            dot = '3';
            glyph.concat(dot);
            digitalWrite(feedback, HIGH);
            delay(500);
            digitalWrite(feedback, LOW);
            }
            
            if(analogRead(A5)==0){
            dot = '4';
            glyph.concat(dot);
            digitalWrite(feedback, HIGH);
            delay(500);
            digitalWrite(feedback, LOW);
            }
            
            if(analogRead(A6)==0){
            dot = '5';
            glyph.concat(dot);
            digitalWrite(feedback, HIGH);
            delay(500);
            digitalWrite(feedback, LOW);
            }
            
            if(analogRead(A7)==0){
            dot = '6';
            glyph.concat(dot);
            digitalWrite(feedback, HIGH);
            delay(500);
            digitalWrite(feedback, LOW);
            }
            
  
  
  
  if(flag){
          if(!(letter(glyph)=='\0')){
            Serial.print(letter(glyph));
          }
          
          flag = LOW;
          glyph = "";
          }
  //delay(500);
}

void next()
{
  flag = HIGH;
}

char letter(String str)
{
  char result;
 
  switch(str.toInt()){
      case 1:
      result = 'a';
      break;
      
      case 12:
      result = 'b';
      break;
      
      case 14:
      result = 'c';
      break;
      
      case 145:
      result = 'd';
      break;
      
      case 15:
      result = 'e';
      break;
      
      case 124:
      result = 'f';
      break;
      
      case 1245:
      result = 'g';
      break;
      
      case 125:
      result = 'h';
      break;
      
      case 24:
      result = 'i';
      break;
      
      case 245:
      result = 'j';
      break;
      
      case 13:
      result = 'k';
      break;
      
      case 123:
      result = 'l';
      break;
      
      case 134:
      result = 'm';
      break;
      
      case 1345:
      result = 'n';
      break;
      
      case 135:
      result = 'o';
      break;
      
      case 1234:
      result = 'p';
      break;
      
      case 12345:
      result = 'q';
      break;
      
      case 1235:
      result = 'r';
      break;
      
      case 234:
      result = 's';
      break;
      
      case 2345:
      result = 't';
      break;
      
      case 136:
      result = 'u';
      break;
      
      case 1236:
      result = 'v';
      break;
      
      case 2456:
      result = 'w';
      break;
      
      case 1346:
      result = 'x';
      break;
      
      case 13456:
      result = 'y';
      break;
      
      case 1356:
      result = 'z';
      break;
      
      case 6:
      result = ' ';
      break;
      
      case 236:
      result = '?';
      break;
      
      case 235:
      result = '!';
      break;
      
      default:
      result = '\0';
  }
  
  return result;
}
