#include "class.h"
#include <iostream>

MyClass::MyClass() : value(0) {}

MyClass::MyClass(int val) : value(val) {}

int MyClass::getValue() const {
    return value;
}

void MyClass::setValue(int val) {
    value = val;
}
void MyClass::printValue() {
    std::cout << "Este es un método privado." << std::endl;
}


