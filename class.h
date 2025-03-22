#ifndef CLASS_H
#define CLASS_H

#include <string>

class MyClass {
    private:
        int value;  
        void printValue();  
    
    public:
        MyClass();
        MyClass(int val);
        int getValue() const;
        void setValue(int val);
        void showValue() { printValue(); }
    };
    
#endif 