/#include <Servo.h>

Servo serv_rotate;  // create servo object to control a servo
Servo serv_strike;

const int SERV_STRIKE_REST_ANGLE = 38;
const int SERV_STRIKE_HIT_ANGLE = 50;
const int SERV_STRIKE_TIME = 70;



void setup() {
      serv_rotate.attach(3);  // attaches the servo on pin 9 to the servo object
        serv_strike.attach(2);
}

void loop() {
      serv_rotate.write(96);
        serv_strike.write(SERV_STRIKE_REST_ANGLE);
          delay(1000);// sets the servo position according to the scaled value
            serv_strike.write(SERV_STRIKE_HIT_ANGLE);
              delay(SERV_STRIKE_TIME);
                serv_strike.write(SERV_STRIKE_REST_ANGLE);
                  

}

void strike(










