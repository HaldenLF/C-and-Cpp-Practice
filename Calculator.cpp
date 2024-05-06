// This is a work in progress calculator that will grow over time to perform most opperations that a standard calculator  can do. 
#include <iostream> 
#include <string>
#include "Addition.h"
using namespace std;

 int main(){

    string main_menu;
    main_menu = "What type of calculation would you like to perform?\n"
            "(1) Addition\n"
            "(2) Subtraction\n"
            "(3) Multiplication\n"
            "(4) Division\n";

    std::cout << main_menu; //prints the menu message

    string userInput = "> "; 
    getline(std::cin,userInput);   //get the input from the user.

    if (userInput == "1" || "Addition"){
        Addition(); // **************create function
    }
    // else if (userInput == "2" || "Subtraction"){
    //     Subtraction.Subtraction(); // **************create function
    // } 
    // else if (userInput == "3" || "Multiplication"){
    //     Multiplication.Multiplication(); // **************create function
    // }
    // else if (userInput == "4" || "Division"){
    //     Division.Division(); // **************create function
    // }
    else {
        std::cout << main_menu; 
    }
}