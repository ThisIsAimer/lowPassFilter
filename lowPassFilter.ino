// C++ code
//

const int INC_BUTTON_PIN = 7;
const int DEC_BUTTON_PIN = 6;

const int FREQ_INC = 10;
const int MIN_FREQ = 50;
const int MAX_FREQ = 20_000;

const int OUTPUT_PIN_1 = 13;
const int OUTPUT_PIN_2 = 12;

const int SIGNAL_PIN = 3; //uses pin for audio, supports PWM


int signalFREQ = MIN_FREQ;

void setup()
{
  pinMode(OUTPUT_PIN_1, OUTPUT);
  pinMode(OUTPUT_PIN_2, OUTPUT);
  
  
  pinMode(INC_BUTTON_PIN, INPUT);
  pinMode(DEC_BUTTON_PIN, INPUT);
  
  
  
}

void loop()
{
  //Actual function
}