#include <iostream>
# include "namespace.h"
using namespace Mathspace;
int main() {
    
    // Access the 'Math' class and its member functions from the 'myNamespace' namespace
    std::cout << "Addition: " << Math::add(5, 3) << std::endl;
    std::cout << "Multiplication: " <<Math::multiply(5, 3) << std::endl;

    return 0;
}
