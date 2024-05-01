#include <iostream>
#include <cstdint>

int main() {
    // Define a variable of type __int128
    __int64_t myInt128 = 12345678901234554532;

    // Print the value
    std::cout << "Value of myInt128: "<< myInt128 << std::endl;

    // Size of __int128 in bytes
    std::cout << "Size of __int128: " << sizeof(__int64_t) << " bytes" << std::endl;

    return 0;
}
