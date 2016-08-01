  // Library added to allow control of servo speed

#include <VarSpeedServo.h>

  // I'm guessing myservo is a function in that library?
  
VarSpeedServo myservo;

  // Apparently I need to learn some C
  // Looks like we're telling something that the servo is on pin 9
  // And it's an integer? 
  // Yes, I'm guessing, not educated.

const int servoPin = 9;

  // And I'm not clear why the stuff above goes before setup
  // Notes to remind myself what I need to learn :)
  // So it looks like in the setup, we pass the info to the myservo
  // function that the servo is connected to pin 9

void setup() {
  myservo.attach(servoPin);

}

  // And here is the part that repeats. I know a thing!
  // Oooh, there's no switch, we basically just have to unplug it. 
  // And then there's the problem of resetting it. Yay a challenge!

void loop() {
  // The first number is the top of the arc, sending it down
  // Expressed in actual degrees?
  // The second number controls the speed 
  myservo.write(80,5,true);

  // And then this is sending it back up
  // Again, the second number controls the speed
  // Wait, or was that the pause?
  // That's why comments are important in code.
  // Thanks so much to Robert Frisbee 
  // For all his help on this project
  myservo.write(80,5,true);
}
