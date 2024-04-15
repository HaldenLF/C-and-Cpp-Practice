#include <iostream> 
#include <string>

    // each word has a predetermined number assigned to it. Sun = 0, Mon = 1 etc.
    enum Weekdays {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    // these have defined numbers added to them by you. Error follows the previous num.
    enum status {ok=0, Warning = 5, Error, Fatal = 999};

    // both have Blue defined whihc throws error.
    // include class to get around this problem
    // need to specifiy in variable which we are using though
    enum color {Red, Yellow, Blue, Green};
    enum class mood {Happy, Blue, Excited, Indifferent};

int enums() { 
    // int today = Monday;
    // Weekdays tomorrow;
    // tomorrow = Tuesday;

    color favourite = color::Red; //specified whihc enum we are using
    mood howIfeel = mood::Blue; //specified whihc enum we are using
    
}