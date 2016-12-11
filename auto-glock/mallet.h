/*
  mallet.h - Library for controlling glockenspiel mallet with
  two servo motors.
  Created by Tristan Calderbank, December 11, 2016.
*/


#ifndef mallet_h
#define mallet_h

#include "Arduino.h"
#include <Servo.h>


const int STRIKER_REST_ANGLE = 38;
const int STRIKER_HIT_ANGLE = 55;
const int STRIKER_HIT_TIME = 70;

const int ROTATOR_REST_ANGLE = 90;

class Striker{
  
  public:
    Striker();
    void init(int pin);
    void hit();
  private:
    int _pin;
    Servo _servo;
    
};

class Rotator{

  public:
    Rotator();
    void init(int pin);
    void turn(int angle);
  private:
    int _pin;
    Servo _servo;
  
};

class Player{
  public:
    Player(int striker_pin, int rotator_pin);
    void init();
    void play(int note);
  private:
    int _striker_pin;
    int _rotator_pin;
    Striker _striker;
    Rotator _rotator;
  
};

#endif





