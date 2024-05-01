// Define a namespace called 'myNamespace' to contain the 'Math' class
namespace Mathspace {
    // Define a class called 'Math' with some basic math operations
    class Math {
    public:
        // Constructor
        Math() {}

        // Destructor
        ~Math() {}

        // Function to add two numbers
        static int add(int a, int b) {
            return a + b;
        }

        // Function to multiply two numbers
        static int multiply(int a, int b) {
            return a * b;
        }
    };
}