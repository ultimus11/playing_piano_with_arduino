#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define MIN_PULSE_WIDTH 125
#define MAX_PULSE_WIDTH 2350
#define DEFAULT_PULSE_WIDTH 2500
#define FREQUENCY 50

uint8_t servonum = 0;

void setup() 
{
Serial.begin(9600);
Serial.println("16 channel Servo test!");
pwm.begin();
pwm.setPWMFreq(FREQUENCY);
}
int pulseWidth(int angle)
{
int pulse_wide, analog_value;
pulse_wide = map(angle, 0, 180, MIN_PULSE_WIDTH, MAX_PULSE_WIDTH);
analog_value = int(float(pulse_wide) / 2500000 * FREQUENCY * 4096);
Serial.println(analog_value);
return analog_value;
}

void loop() {
//pwm.setPWM(0, 0, pulseWidth(120));
//delay(25000);
pwm.setPWM(7, 0, 240);
delay(250);
pwm.setPWM(7, 0, 200);
delay(250);
pwm.setPWM(6, 0, 250);
delay(250);
pwm.setPWM(6, 0, 200);
delay(250);
pwm.setPWM(4, 0, 250);
delay(250);
pwm.setPWM(4, 0, 200);
delay(250);
pwm.setPWM(6, 0, 250);
delay(250);
pwm.setPWM(6, 0, 200);
delay(250);
pwm.setPWM(3, 0, 230);
delay(250);
pwm.setPWM(3, 0, 200);
delay(250);
pwm.setPWM(4, 0, 250);
delay(250);
pwm.setPWM(4, 0, 200);
delay(250);
pwm.setPWM(4, 0, 250);
delay(250);
pwm.setPWM(4, 0, 200);
delay(250);
//that was sare jaha se aacha
pwm.setPWM(0, 0, 200);
delay(250);
pwm.setPWM(0, 0, 250);
delay(250);
pwm.setPWM(1, 0, 300);
delay(250);
pwm.setPWM(1, 0, 200);
delay(250);
pwm.setPWM(4, 0, 250);
delay(250);
pwm.setPWM(4, 0, 200);
delay(250);
pwm.setPWM(6, 0, 250);
delay(250);
pwm.setPWM(6, 0, 200);
delay(250);
pwm.setPWM(8, 0, 200);
delay(250);
pwm.setPWM(8, 0, 270);
delay(250);
pwm.setPWM(9, 0, 300);
delay(250);
pwm.setPWM(9, 0, 200);
delay(250);
pwm.setPWM(8, 0, 200);
delay(250);
pwm.setPWM(8, 0, 270);
delay(250);
pwm.setPWM(8, 0, 200);
delay(250);
pwm.setPWM(8, 0, 270);
delay(250);
pwm.setPWM(9, 0, 300);
delay(250);
pwm.setPWM(9, 0, 200);
delay(250);
pwm.setPWM(8, 0, 200);
delay(250);
pwm.setPWM(8, 0, 270);
delay(250);
pwm.setPWM(6, 0, 250);
delay(250);
pwm.setPWM(6, 0, 200);
delay(250);
pwm.setPWM(4, 0, 250);
delay(250);
pwm.setPWM(4, 0, 200);
delay(250);
}
