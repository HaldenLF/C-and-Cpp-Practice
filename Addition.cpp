#include <iostream> 
#include <string>
#include <sstream>
#include <vector>
#include "Addition.h"

using namespace std;

int Addition(){
    cout << "Enter the numbers you wish to add!\n";

    int sum = 0;

    string userInput = "> "; 
    getline(cin,userInput );

    stringstream ss(userInput);
    int num;
    while(ss >> num){
        sum += num;
    }

    cout << "The result is: " << sum << endl;
    return 0;
}