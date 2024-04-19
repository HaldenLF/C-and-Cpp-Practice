struct Date{
    int dd;
    int mm;
    int ccyy;
};

bool IsValid(Date* pDate){ // Adding const to both pointer and param will stop them from changing.
    const int monthdays[] {31,28,31,30,31,30,31,31,30,31,30,31};
    bool valid;
    valid = (pDate -> mm > 0) && (pDate -> mm < 12) &&
    (pDate -> dd > 0) && (pDate -> dd <= monthdays[pDate ->  mm - 1]);  
    pDate -> dd = 10;
    pDate = new Date{1, 1, 2000};
    return valid;
}