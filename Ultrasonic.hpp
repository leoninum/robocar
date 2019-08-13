#ifndef __ULTRASONIC
#define __ULTRASONIC

#define TO_CLOSE -1;
#define TO_FAR -2;

class Ultrasonic {
  private:
    int trigger;
    int echo;
  public:
    Ultrasonic(int trigger, int echo) {
      this->trigger = trigger;
      this->echo = echo;
      pinMode(trigger, OUTPUT);
      pinMode(echo, INPUT);
    }
    float getDistance() {
      digitalWrite(this->trigger, LOW);
      delay(5);
      digitalWrite(this->trigger, HIGH);
      delay(10);
      digitalWrite(this->trigger, LOW);
      float dauer = pulseIn(this->echo, HIGH);
      float entfernung = (dauer / 2) * 0.03432;
      if (entfernung <= 3)
      {
          return TO_CLOSE;
    } else if(entfernung >= 500) {
      return TO_FAR;
    } else {
      return entfernung;
    }
}
};

#endif
