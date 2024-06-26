
// functions

int function(){ // function that defines variables and calls the Add function
    int x = 10;
    int y = 20;
    int answer;

    // answer = Add(x,y);
    return 0;
}

int Add(int num1, int num2){ // function that takes two variables and adds them
    int result;
    result = num1 + num2;
    return result;  // returns the result of the function
}

void referencs(){ // references and pointers are used to locate where a variable 
                // is store in memory. 
                // references must be initialised at declaration
                // they cannot be changed
                //
                // pointers can be initialised after declaration
                // can point to any int
                // can change what they point to   
                // must be dereferenced to use values.

    int x;
    int& refx = x; //reference to x

    int y; 
    int* pint;  // pointer
    pint = &x;  // pointing to x
    pint = &y;  // pointing to y

    y = 10;
    * pint = 10; // dereferenced 
}

// ----------------- Function overloading ----------------------------
 // function overloading it when you have multiple functions with the same name
 // to differentiate them from each other there is a few things that must be done

void print(); //valid
// bool print(); // not valid due to type
void print(int num, int num2); // valid with paramters
//void print(int num, int num2); // invalid due to being identical to one above
void print(int num1, char name); // valid since parameters are different   

