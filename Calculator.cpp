// This is a work in progress calculator that will grow over time to perform most opperations that a standard calculator  can do. 
#include <iostream> 
#include <string>
#include "CalculatorFunctions.h"
using namespace std;


int main_menu(){
    // Create main_menu function that cna be called and display the menu
    // after each calculation is finished
    return 0;
}

int main(){

    string main_menu;
    main_menu = "What type of calculation would you like to perform?\n"
            "(1) Addition\n"
            "(2) Subtraction\n"
            "(3) Multiplication\n"
            "(4) Division\n";

    std::cout << main_menu; //prints the menu message

    string userInput = "\n> "; 
    getline(std::cin,userInput);   //get the input from the user.

    if (userInput == "Addition" || userInput == "1") {
        Addition(); 
        // call main_menu function
    } 
    else if (userInput == "Subtraction" || userInput == "2") {
        Subtraction();
        // call main_menu function 
    } 
    else if (userInput == "Multiplication" || userInput == "3") {
        Multiplication();
        // call main_menu function 
    } 
    // else if (userInput == "Division" ||userInput == "4") {
    //     Division();
            // call main_menu function 
    // } 
    else {
        // replace with main_menu function call
        std::cout << main_menu;  // Display menu for invalid input
    }
}