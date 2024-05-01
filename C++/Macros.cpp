#define DEBUG_MODE
#include <iostream>
// Define the macro DEBUG_MODE
int main() {
    // Check if DEBUG_MODE is defined
    #ifdef DEBUG_MODE
        std::cout << "Debug mode is enabled" << std::endl;
    #endif
    // Check if RELEASE_MODE is not defined
    #ifndef RELEASE_MODE
        std::cout << "Release mode is not enabled" << std::endl;
    #endif
    // Define another macro
    #define VERBOSE_MODE
    // Check if VERBOSE_MODE is defined
    #ifdef VERBOSE_MODE
        std::cout << "Verbose mode is enabled" << std::endl;
    #endif
    std::cout<<sizeof(int)<<std::endl;
}
