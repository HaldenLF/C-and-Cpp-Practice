#include <iostream> // #include helps to load libraries
                    // <iostream> used to print to terminal
#include <string> // to initalize string library

int Syntax() { //main function is the starting point for program
    std::cout << "Hello, World!" << std::endl; //syntax for printing to terminal
    // std::cout << to print does not separate by lines
    // << std::endl; to end and print new line

    // this prints on the same line
    std::cout << "Hello, World!";
    std::cout << "num 1";
    
    // this prints on seperate lines
    std::cout << "Hello, World!" << std::endl;
    std::cout << "num 1" << std::endl;

    int firstnum = 12; // statements require initalization by type
    // like int, string, float, etc.
    // all statments and functions work from top to bottom.

    int sumFunction(int param1, int param2) { // functions need a type just like statments
    // parameters can be passed to them to feed data to the code within
    // functions can be called many times in different locations
        return 0;
    }

    return 0; // not required but recommened to reduce unwanted beahviour
}