#include <iostream>

using namespace std;

int ForLoop() {
    // Print numbers from 1 to 10
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Iterate through an array
    int numbers[] = {1, 5, 8, 3, 2};
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

int ifStatement() {
    int age = 25;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}

int doWhile() {
    int guess = 0;
    int secretNumber = 7;

    do {
        cout << "Enter a guess (1-10): ";
        cin >> guess;
    } while (guess != secretNumber);

    cout << "You guessed it correctly!" << endl;

    return 0;
}

int switchStatement() {
    char grade = 'B';

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good job!" << endl;
            break;
        case 'C':
            cout << "Satisfactory." << endl;
            break;
        default:
            cout << "Invalid grade." << endl;
    }

    return 0;
}

int ExceptionHandling() {
    int numerator = 10;
    int denominator = 0;

    try {
        int result = numerator / denominator;
        cout << "Result: " << result << endl; // This line won't be executed
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }

    cout << "Program continues after handling the exception." << endl;

    return 0;
}