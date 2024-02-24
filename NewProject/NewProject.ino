
// NewProject.ino
// RainDect.WindowsOff
// Version 0.0.1
// Auther Fkrsteve
// UpdateDate 20230224

#define dW digitalWrite
#define aW analogWrite
#define dR digitalRead
#define aR analogRead
#define Hi HIGH
#define Lo LOW
#define OP OUTPUT
#define IP INPUT
// initialization function
int rdRainSensor = 13 ;//define Digital Port 13 as RainDetectorInput
int opServo ;//define Digital Port 2 as LEDOutputControler
int waittime = 120;
int rvRainSensor;
void setup(){
    Serial.begin(9600);
    pinMode(rdRainSensor,IP);
    pinMode(opServo,OP);
}
void loop(){
    rvRainSensor = dR(rdRainSensor);
}