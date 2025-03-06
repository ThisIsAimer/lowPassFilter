// C++ code
//


// initialising buttons
const int INC_BUTTON_PIN = 7;
const int DEC_BUTTON_PIN = 6;


// initialising numbers
const int FREQ_INC = 10;
const int MIN_FREQ = 50;
const int MAX_FREQ = 20000;
  
// initialising output pins
const int OUTPUT_PIN_1 = 13;
const int OUTPUT_PIN_2 = 12;

const int SIGNAL_PIN = 3; //uses pin for audio, supports PWM


int signalFreq = MIN_FREQ;

void setup()
{
  
  // outputs
  pinMode(OUTPUT_PIN_1, OUTPUT);
  pinMode(OUTPUT_PIN_2, OUTPUT);
  
  // button inputs
  pinMode(INC_BUTTON_PIN, INPUT);
  pinMode(DEC_BUTTON_PIN, INPUT);
  
  //serial
  Serial.begin(115200); //speed of data transfer 115 kb
  
  Serial.print("\n\rf = ");
  Serial.print(signalFreq);
  Serial.println("hz");
  
}

void loop()
{
  //Actual function
  if (!digitalRead(INC_BUTTON_PIN)){
    
    signalFreq += FREQ_INC;
    
    if(signalFreq>MAX_FREQ){
      signalFreq = MAX_FREQ;
    }
    
    tone(SIGNAL_PIN, signalFreq);
  	Serial.print("\n\rf = ");
    Serial.print(signalFreq);
    Serial.println("hz");
     
  }
  
  
  if (!digitalRead(DEC_BUTTON_PIN)){
    
    signalFreq -= FREQ_INC;
    
    if(signalFreq<MIN_FREQ){
      signalFreq = MIN_FREQ;
    }
    
    Serial.print("\n\rf = ");
    Serial.print(signalFreq);Serial.println("hz");
     
  }
  
  delay(10);
  
}