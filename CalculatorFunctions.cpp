#include <iostream> 
#include <string>
#include <sstream>
#include <vector>
#include <limits>
#include "CalculatorFunctions.h"

using namespace std;

int Addition(){
    cout << "\nEnter the numbers you wish to add!\n";

    double sum = 0;

    string userInput = "> "; 
    getline(cin,userInput );

    if (userInput.empty()) {
    cout << "No numbers entered." << endl;
    return numeric_limits<int>::quiet_NaN();
    }

    stringstream ss(userInput);
    double num;
    while(ss >> num){
        sum += num;
    }

    cout << "The result is: " << sum << endl;
    return 0;
}

double Subtraction(){

    vector<double> numbers;

    cout << "\nEnter the numbers you wish to subtract!"
            "Press Q to exit\n";;

    double number;
    while (cin >> number){
        numbers.push_back(number);
    }

    if (numbers.empty()) {
    cout << "No numbers entered." << endl;
    return numeric_limits<double>::quiet_NaN();
    }

    double result = numbers[0];
    for (double i = 1; i < numbers.size(); i++) {
        result -= numbers[i];
    }

    cout << "The result is: " << result << endl;
    return 0;
}

double Multiplication(){

    vector<double> numbers;

    cout << "\nEnter the numbers you wish to Multiply!\n"
            "Press Q to exit\n";

    double number;
    while (cin >> number){
        numbers.push_back(number);
    }

    if (numbers.empty()) {
    cout << "No numbers entered." << endl;
    return numeric_limits<double>::quiet_NaN();
    }

    double result = 1.0;
    for (double number: numbers) {
        result *= number;
    }

    cout << "The result is: " << result << endl;
    return 0;
}