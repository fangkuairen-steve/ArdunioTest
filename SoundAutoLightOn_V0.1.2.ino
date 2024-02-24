
// NewProject.ino
// Auto Sound Controlling Light
// Version 0.1.2
// Auther Fkrsteve
// UpdateDate 20240223

#define dW digitalWrite
#define aW analogWrite
#define dR digitalRead
#define aR analogRead
#define Hi HIGH
#define Lo LOW
#define OP OUTPUT
#define IP INPUT
// initialization function
int raSoundSensor = A1 ;//define Analog Port 1 as SoundSensorInput
int odLED = 2 ;//define Digital Port 2 as LEDOutputControler
int timer=0;

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600); //initialize serial communication
    pinMode(odLED, OP); //define ledPin as an output
    pinMode(raSoundSensor, IP); //define Sound Sensor as an input
    int timer = 0;
    int rvSoundVal;
}

void loop() {
    timer++;
    // put your main code here, to run repeatedly:
    int rvSoundVal = aR(raSoundSensor);
    Serial.print("\nsensorVal  ");
    Serial.print(rvSoundVal);
    Serial.print(timer);
    if (rvSoundVal > 100){
        int timer = 0;
    }
    if (int(timer) < 5){
        dW(odLED,Hi);
    }else{
        dW(odLED,Lo);        
    }
    delay(1000);

}
