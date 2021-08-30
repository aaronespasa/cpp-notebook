/*
`#include` is a preprocessor command that searches for the iostream header file and pastes its contents into the program.

More about iostream (Input-Output stream): https://www.geeksforgeeks.org/basic-input-output-c/
*/
#include <iostream>

// The main function has the datatype of `integer`.
// That means, it should return a number. That's why we return 0.
int main() {
    std::cout << "Hello World!";
    return 0;
}