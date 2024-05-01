#include <iostream>

class MyClass {
// private:
    

public:
    int value;
    // Constructor
    MyClass(int val) : value(val) {}

    // Copy constructor
    MyClass(MyClass& other) {
        value = other.value; // Copy the value from 'other'
    }

    // Function to get the value
    int getValue(){
        return value;
    }
};

int main() {
    // Create an object 'obj1'
    MyClass obj1(10);

    // Create a new object 'obj2' as a copy of 'obj1'
    MyClass obj2 = obj1; // Copy constructor is called here

    // Print the values of 'obj1' and 'obj2'
    std::cout << "Value of obj1: " << obj1.getValue() << std::endl;
    std::cout << "Value of obj2: " << obj2.getValue() << std::endl;

    return 0;
}
