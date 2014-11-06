/*
Stepper Driver program
For Katherine Behar
<e-waste> installation


Written by:
Joshua P. Morgan
Christoper Heintz

November 2014

*/





/*************************************************
 * Public Constants
 *************************************************/

#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978



#define en 8
#define stepX 2
#define stepY 3
#define stepZ 4
#define dirX  5
#define dirY 6
#define dirZ 7


void playTone(int pitch, int duration);

void setup()
{
  
  
  //Only Drive stepX
  //stepY, stepZ, stepX all tied together in hardware. Set stepY, stepZ to input (Hi-Z) to not burn up the arduino
  pinMode(en, OUTPUT);
  pinMode(stepX, OUTPUT);
  pinMode(stepY, INPUT);
  pinMode(stepZ, INPUT);
  pinMode(dirX, OUTPUT);
  pinMode(dirY, OUTPUT);
  pinMode(dirZ, OUTPUT);
  
  
  //Enable outputs
  digitalWrite(en, LOW);
  digitalWrite(dirX, HIGH);
  digitalWrite(dirY, HIGH);
  digitalWrite(dirZ, HIGH);
    
  
  
  
}


void loop()
{
 
  while(true)
  {
    
    digitalWrite(dirX, HIGH);
    digitalWrite(dirY, HIGH);
    digitalWrite(dirZ, HIGH);
    //E4 #1
    playTone(NOTE_E4, 2855);
    delay(873);
    playTone(NOTE_E4, 306);
    delay(559);
    playTone(NOTE_E4, 306);
    delay(2833);
    
    
    //C4 #1
    playTone(NOTE_C4, 244);
    delay(668);
    playTone(NOTE_C4, 3693);
    delay(2423);
    
    
    //E4 #2
    playTone(NOTE_E4, 2864);
    delay(869);
    playTone(NOTE_E4, 148);
    delay(794);
    playTone(NOTE_E4, 227);
    delay(2698);
    
     
    //E4 #3
    playTone(NOTE_E4, 3095);
    delay(773);
    playTone(NOTE_E4, 249);
    delay(663);
    playTone(NOTE_E4, 192);
    delay(2746);
    
    //G4 #1
    playTone(NOTE_G4, 3060);
    delay(659);
    playTone(NOTE_G4, 223);
    delay(664);
    playTone(NOTE_G4, 3265);
    delay(663);
    playTone(NOTE_G4, 3251);
    
    //C#3 #1
    playTone(NOTE_CS3, 3265);
    delay(663);
    playTone(NOTE_CS3, 3251);
    delay(2833);
    
    
    //C#4 #1
    playTone(NOTE_CS4, 3265);
    delay(663);
    playTone(NOTE_CS4, 3251);
    delay(663);
    playTone(NOTE_CS4, 3251);
    delay(2833);
    
    
    //C#3 #2
    playTone(NOTE_CS3, 3265);
    delay(663);
    playTone(NOTE_CS3, 3251);
    delay(2833);
    
    //C#3 #3
    playTone(NOTE_CS3, 3265);
    delay(663);
    playTone(NOTE_CS3, 3251);
    delay(2833);
    
    //G4 #2
    playTone(NOTE_G4, 3060);
    delay(659);
    playTone(NOTE_G4, 223);
    delay(664);
    playTone(NOTE_G4, 3265);
    delay(663);
    playTone(NOTE_G4, 3251);
    delay(3518);
    
    //E4 #4
    playTone(NOTE_E4, 2855);
    delay(873);
    playTone(NOTE_E4, 306);
    delay(559);
    playTone(NOTE_E4, 306);
    delay(2833);
    
    
    //C4 #2
    playTone(NOTE_C4, 244);
    delay(668);
    playTone(NOTE_C4, 3693);
    delay(2423);
    
    //E4 #5
    playTone(NOTE_E4, 2864);
    delay(869);
    playTone(NOTE_E4, 148);
    delay(794);
    playTone(NOTE_E4, 227);
    delay(2698);
    
    //E4 #6
    playTone(NOTE_E4, 3095);
    delay(773);
    playTone(NOTE_E4, 249);
    delay(663);
    playTone(NOTE_E4, 192);
    delay(2746);
    
    
    //Switch directions so motors unspiral
    
    digitalWrite(dirX, LOW);
    digitalWrite(dirY, LOW);
    digitalWrite(dirZ, LOW);
    
    //G4 #3
    playTone(NOTE_G4, 3060);
    delay(659);
    playTone(NOTE_G4, 223);
    delay(664);
    playTone(NOTE_G4, 3265);
    delay(663);
    playTone(NOTE_G4, 3251);
    delay(3518);
    
    
    //E4 #7
    playTone(NOTE_E4, 2855);
    delay(873);
    playTone(NOTE_E4, 306);
    delay(559);
    playTone(NOTE_E4, 306);
    delay(2833);
    
    //C4 #3
    playTone(NOTE_C4, 244);
    delay(668);
    playTone(NOTE_C4, 3693);
    delay(2423);
    
    
    //E4 #8
    playTone(NOTE_E4, 2864);
    delay(869);
    playTone(NOTE_E4, 148);
    delay(794);
    playTone(NOTE_E4, 227);
    delay(2698);
    
    
    //E4 #9
    playTone(NOTE_E4, 3095);
    delay(773);
    playTone(NOTE_E4, 249);
    delay(663);
    playTone(NOTE_E4, 192);
    delay(2746);
    
    
    //G4 #4
    playTone(NOTE_G4, 3060);
    delay(659);
    playTone(NOTE_G4, 223);
    delay(664);
    playTone(NOTE_G4, 3265);
    delay(663);
    playTone(NOTE_G4, 3251);
    
    
    //C#3 #4
    playTone(NOTE_CS3, 3265);
    delay(663);
    playTone(NOTE_CS3, 3251);
    delay(2833);
    
    
    //C#4 #2
    playTone(NOTE_CS4, 3265);
    delay(663);
    playTone(NOTE_CS4, 3251);
    delay(663);
    playTone(NOTE_CS4, 3251);
    delay(2833);
    
    
    //C#3 #5
    playTone(NOTE_CS3, 3265);
    delay(663);
    playTone(NOTE_CS3, 3251);
    delay(2833);
    

    //C#3 #6
    playTone(NOTE_CS6, 3265);
    delay(663);
    playTone(NOTE_CS6, 3251);
    delay(2833);
    
    //G4 #5
    playTone(NOTE_G4, 3060);
    delay(659);
    playTone(NOTE_G4, 223);
    delay(664);
    playTone(NOTE_G4, 3265);
    delay(663);
    playTone(NOTE_G4, 3251);
    delay(3518);
    
    //E4 #10
    playTone(NOTE_E4, 2855);
    delay(873);
    playTone(NOTE_E4, 306);
    delay(559);
    playTone(NOTE_E4, 306);
    delay(2833);
    
    //C4 #4
    playTone(NOTE_C4, 244);
    delay(668);
    playTone(NOTE_C4, 3693);
    delay(2423);
    
    //E4 #11
    playTone(NOTE_E4, 2864);
    delay(869);
    playTone(NOTE_E4, 148);
    delay(794);
    playTone(NOTE_E4, 227);
    delay(2698);
    
    
   //E4 #12
   playTone(NOTE_E4, 3095);
   delay(773);
   playTone(NOTE_E4, 249);
   delay(663);
   playTone(NOTE_E4, 192);
   delay(2746);

   
   //G4 #5
   playTone(NOTE_G4, 3060);
   delay(659);
   playTone(NOTE_G4, 223);
   delay(664);
   playTone(NOTE_G4, 3265);
   delay(663);
   playTone(NOTE_G4, 3251);  
   
   
    
  }
   
  
  
}



void playTone(int pitch, int duration)
{
  digitalWrite(en, LOW);
  tone(stepX, pitch, duration);
  
  delay(duration);
  noTone(stepX);
  
  digitalWrite(en, HIGH);
  
}
