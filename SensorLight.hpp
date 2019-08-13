#ifndef __LIGHT_SENSOR
#define __LIGHT_SENSOR

class LightSensor {
  private:
    int line1;
    int line2;
    int line3;

    bool isActive(int line) {
      switch(line) {
        case (1): {
            return !digitalRead(this->line1);
        }
        case (2): {
          return !digitalRead(this->line2);
        }
        case (3): {
          return !digitalRead(this->line3);
        }
      }
    }

   public:
    LightSensor(int line1, int line2, int line3): line1(line1), line2(line2), line3(line3) {
    }
    bool isLine1Active() {
      return this->isActive(1);
    }
    bool isLine2Active() {
      return this->isActive(2);
    }
    bool isLine3Active() {
      return this->isActive(3);
    }
};

#endif
