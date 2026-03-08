#include <Servo.h>

Servo myservo;
int pos = 180;
bool start = true;

void setup() {
    myservo.attach(8);
    myservo.write(pos);
    Serial.begin(9600);
}

void loop() {

    while(start) {
        myservo.write(180);
        delay(1000);
        Serial.println(myservo.read());

        myservo.write(90);
        delay(1000);
        Serial.println(myservo.read());

        myservo.write(0);
        delay(1000);

        myservo.write(90);
        delay(1000);
        Serial.println(myservo.read());

        start = false;
        myservo.detach();
    }
}
