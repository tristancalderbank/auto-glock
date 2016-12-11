#include "Arduino.h"
#include "mallet.h"

Striker::Striker(){

}

void Striker::init(int pin){

  _pin = pin;
  _servo.attach(pin);
  _servo.write(STRIKER_REST_ANGLE);
  
}

void Striker::hit(){
  
  _servo.write(STRIKER_HIT_ANGLE);
  delay(STRIKER_HIT_TIME);
  _servo.write(STRIKER_REST_ANGLE);
  
}

Rotator::Rotator(){

}

void Rotator::init(int pin){

  _pin = pin;
  _servo.attach(_pin);
  _servo.write(ROTATOR_REST_ANGLE);

}

void Rotator::turn(int angle){

  _servo.write(angle);
  
}

Player::Player(int striker_pin, int rotator_pin){

  _striker_pin = striker_pin;
  _rotator_pin = rotator_pin;
  
}

void Player::init(){

  _striker.init(_striker_pin);
  _rotator.init(_rotator_pin);  
  
}

void Player::play(int note){

  _rotator.turn(note);
  _striker.hit();

  
}


