## Data Input and Output

#include <iostream>
#include <string>

int addNumbers(int first, int second){ // function that takes two parameters.
    int result = first + second;
    return result; // returns the sum of both parameters
}

int main(){ 
    int first_number {13}; //statment
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;
    
    int sum = first_number + second_number;
    std::cout << "Sum: " << sum  << std::endl; //20

    sum = addNumbers(25,7);
    std::cout << "Sum: " << sum << std::endl; //32

    // use cin for input
    // use cerr for errors
    // user clog for log message    
    
    int age;
    std::string name;

    std::cout << "Last name: " << std::endl;
    std::cin >> name; // just one word, no spaces
    std::getline(std::cin,name); // for more than one word

    std::cout << "Age: " << std::endl;
    std::cin >> age;

    std::cout << "Hello " << name <<  ", you are " << age << " years old." <<std::endl; 


    return 0; // not required but recommened to reduce unwanted beahviour
}
