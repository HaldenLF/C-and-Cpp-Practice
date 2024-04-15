#include <iostream> 
#include <string>


int structs() { 

    // useful for grouping multiple variables in one place
    // can have different types within it.

    struct date {
        int dd;
        int mm;
        int ccyy;
    };

    struct employee {
        int employee_id;
        date DOB;
        date start_date;
    };

    // be mindful of size of data types when implementing multiple variables 
    // within one struct. 
    // for example you can use char or short instead of int.
    // or use the unsigned type to add only the require amount of bits.
    // Using these can depend on situation and unsigned can be slower.
    struct worker{
        int startDay; // 1-31
        char startMonth; // 0-255
        short startYear; // -32768 to +32  
        bool married; 
        bool ownsCar;
        unsigned wearsGlasses :1; // 1 bit
    };




}