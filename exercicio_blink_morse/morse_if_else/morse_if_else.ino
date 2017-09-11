/*  
  exercicio_blink_morse
  Blink Arduino built-in LED in morse code
  Authors: Arthur Cantarela and Luiz Felipe Martins
  Morse code message: CANTARELA
  IF-ELSE logic implementation: LUIZ FELIPE

  References:
  Based on Blink example provided by Arduino IDE
  https://en.wikipedia.org/wiki/Morse_code (Access: Aug 14th, 2017)
*/

int stringLength(char *str) {
  int i = 0;
  while(str[i] != 0)
    i++;
  return i;
}

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(900);
  digitalWrite(LED_BUILTIN, LOW);
  delay(300);  
}

void morseBlinker(char *str) {
  int i, len;
  len = stringLength(str);
  for(i = 0; i < len; i++) {
      if(str[i]=='A') {
        dot(); dash(); 
      }
      if(str[i]=='B'){
        dash(); dot(); dot(); dot(); 
      }
    
      if(str[i]== 'C'){
        dash(); dot(); dash(); dot();
      } 
        
      if(str[i]=='D'){
        dash(); dot(); dot(); 
      }
        
      if(str[i]=='E'){
        dot(); 
      }
      
      if(str[i]=='F'){
        dot(); dot(); dash(); dot(); 
      }
        
      if(str[i]=='G'){
        dash(); dash(); dot(); 
      }
        
      if(str[i]=='H'){
        dot(); dot(); dot(); dot();
      } 
        
      if(str[i]=='I'){
        dot(); dot(); 
      }
        
      if(str[i]=='J'){
        dot(); dash(); dash(); dash(); 
      }
        
      if(str[i]=='K'){
        dash(); dot(); dash(); 
      }
        
      if(str[i]=='L'){
        dot(); dash(); dot(); dot(); 
      }
        
      if(str[i]=='M'){
        dash(); dash();
      } 
        
      if(str[i]=='N'){
        dash(); dot(); 
      }
        
      if(str[i]=='O'){
        dash(); dash(); dash(); 
      }
        
      if(str[i]=='P'){
        dot(); dash(); dash(); dot();
      } 
        
      if(str[i]=='Q'){
        dash(); dash(); dot(); dash();
      } 
        
      if(str[i] =='R'){
        dot(); dash(); dot(); 
      }
        
      if(str[i]=='S'){
        dot(); dot(); dot(); 
      }
        
      if(str[i] =='T'){
        dash(); 
      }
        
      if(str[i]== 'U'){
        dot(); dot(); dash();
      } 
        
      if(str[i]== 'V'){
        dot(); dot(); dot(); dash(); 
      }
        
      if(str[i] =='W'){
        dot(); dash(); dash(); 
      }  
        
      if(str[i]=='X'){
        dash(); dot(); dot(); dash();
      } 
        
      if(str[i]=='Y'){
        dash(); dot(); dash(); dash(); 
      }
        
      if(str[i]=='Z'){
        dash(); dash(); dot(); dot();
      }
        
      if(str[i]== ' '){
        delay(2100);
      
    }
    delay(900);
  }
}



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}
  
// the loop function runs over and over again forever
void loop() {
  char namestring[] = "LLLLUUUUEEE";
  morseBlinker(namestring);
} 
  



