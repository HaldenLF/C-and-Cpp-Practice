// This is a work in progress calculator that will grow over time to perform most opperations that a standard calculator  can do. 
#include <iostream> 
#include <string>
#include "CalculatorFunctions.h"
using namespace std;


string main_menu(){
    
    string main_menu;
    main_menu = "What type of calculation would you like to perform?\n"
            "(1) Addition\n"
            "(2) Subtraction\n"
            "(3) Multiplication\n"
            "(4) Division\n";

    return main_menu;
}

int main(){

    std::cout << main_menu(); //prints the menu message

    string userInput = "\n> "; 
    getline(std::cin,userInput);   //get the input from the user.

    if (userInput == "Addition" || userInput == "1" ) {
        Addition(); // perform addition
        main_menu();
    } 
    else if (userInput == "Subtraction" || userInput == "2") {
        Subtraction(); // perform subtraction
        main_menu(); 
    } 
    else if (userInput == "Multiplication" || userInput == "3") {
        Multiplication(); // perform multiplication
        main_menu(); 
    } 
    else if (userInput == "Division" ||userInput == "4") {
        Division(); // perform division
        main_menu(); 
    } 
    else {
        main_menu(); // Display menu for invalid input
    }
}