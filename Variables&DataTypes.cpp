#include <iostream>
#include <string>

int variablesAndDatatypes() {
    // you can create variables and init later or 
    // init at the same time as creation
    // must init before using or else you will get garbage numbers from memory
    int file_size = 100; 
    double sales = 9.99; // deciaml upto 15
    float sale = 9.98; // deciaml upto 7
    char name = 'B'; // stores a single character/ use single quotes
    std::string text = "words";// stores multiple characters / use double quotes    
    bool myBoolean = true;
    

    /*    
    // simple swap variable value practice
    int a = 1;
    int b = 2;
    int c = a;

    a = b;
    b = c;

    std::cout << a;
    std::cout << b;
    */

    // const
    // const or constants are variables that once declared cannot be changed
    const double pi = 3.14;
    // pi = 0; // output will throw error since const are immutable

    return 0;
}
