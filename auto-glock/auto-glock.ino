#include "mallet.h"

Player bass(2, 3);

void setup() {

  bass.init();
  
}

void loop() {

  delay(1000);
  bass.play(80);
  delay(1000);
  bass.play(90);
  delay(1000);
  bass.play(100);
  delay(1000);
  bass.play(115);


}

