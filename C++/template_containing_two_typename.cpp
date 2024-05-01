#include <iostream>

// Define a class template with two type parameters
template<typename T, typename U>
class Pair {
private:
    T first;
    U second;
public:
    // Constructor
    Pair(T f, U s) : first(f), second(s) {}

    // Getter methods
    T getFirst() const {
        return first;
    }

    U getSecond() const {
        return second;
    }
};

int main() {
    // Create an instance of Pair with int and double as types
    Pair<int, double> myPair(10, 3.14);

    // Get and print the values stored in the pair
    std::cout << "First value: " << myPair.getFirst() << std::endl;
    std::cout << "Second value: " << myPair.getSecond() << std::endl;

    return 0;
}
