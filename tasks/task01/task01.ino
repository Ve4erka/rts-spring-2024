const int led_pin = 3;
const int led_pin2 = 5;
const int led_pin3 = 6;
const int led_pin4 = 9;
const int led_pin5 = 10;

int led_state = LOW; 
int led_state2 = LOW;
int led_state3 = LOW;
int led_state4 = LOW;
int led_state5 = LOW;

unsigned long previous_millis = 0; 
unsigned long previous_millis2 = 0; 
unsigned long previous_millis3 = 0; 
unsigned long previous_millis4 = 0; 
unsigned long previous_millis5 = 0;  

const long interval = 10000;
const long interval2 = 1000;
const long interval3 = 500;
const long interval4 = 100;
const long interval5 = 50;  

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
  pinMode(led_pin4, OUTPUT);
  pinMode(led_pin5, OUTPUT);
}

void loop() {
  unsigned long current_millis = micros();

  if (current_millis - previous_millis >= interval) {
    previous_millis = current_millis;

    if (led_state == LOW) {
      led_state = HIGH;
    } else {
      led_state = LOW;
    }

    digitalWrite(led_pin, led_state);
  }

  if (current_millis - previous_millis2 >= interval2) {
    previous_millis2 = current_millis;

    if (led_state2 == LOW) {
      led_state2 = HIGH;
    } else {
      led_state2 = LOW;
    }

    digitalWrite(led_pin2, led_state2);
  }

  if (current_millis - previous_millis3 >= interval3) {
    previous_millis3 = current_millis;

    if (led_state3 == LOW) {
      led_state3 = HIGH;
    } else {
      led_state3 = LOW;
    }

    digitalWrite(led_pin3, led_state3);
  }

  if (current_millis - previous_millis4 >= interval4) {
    previous_millis4 = current_millis;

    if (led_state4 == LOW) {
      led_state4 = HIGH;
    } else {
      led_state4 = LOW;
    }

    digitalWrite(led_pin4, led_state4);
  }

  if (current_millis - previous_millis5 >= interval5) {
    previous_millis5 = current_millis;

    if (led_state5 == LOW) {
      led_state5 = HIGH;
    } else {
      led_state5 = LOW;
    }

    digitalWrite(led_pin5, led_state5);
  }
}
