#pragma once
#ifndef BLINK_H
#define BLINK_H

#include <Arduino.h>
#include <TaskManager.h>

class Blink: public Task::Base {
    bool isOn = false;
    uint8_t pin = 0;

public:
    Blink (const String &name): Task::Base(name) {
    }

    Blink* withPin (uint8_t pin_n) {
      pin = pin_n;
      pinMode(pin, OUTPUT);
      digitalWrite(pin, LOW);
      return this;
    }

    ~Blink() {}

    void update() override {
        digitalWrite(pin, isOn);
        isOn = !isOn;
    }
};

#endif  // BLINK_H
