#include <iostream>
#include <string>
using namespace std;

class Employee {

public: // functions

    // Constructor to initialize object data
    Employee(string name, int empno, int ext) {
        this->name = name;
        employeeNo = empno;
        extension = ext;
    }

    void SetName(string name);
    void SetEmpNo(int empno);
    void SetExtension(int ext);
    string GetName() const;
    int GetEmpNo() const;
    int GetExtension() const;

protected: // functions

private: // functions

public: // data (avoid wherever possible)

protected://data (only used in class hierarchies & inheritance)

private: // data
    string name;
    int employeeNo;
    int extension;
};

// int mainClasses() {
//   Employee emp1("Jane Smith", 54321, 2345);  // Create an Employee with constructor

//   cout << "Employee Name: " << emp1.GetName() << endl;
//   cout << "Employee Number: " << emp1.GetEmpNo() << endl;
//   cout << "Employee Extension: " << emp1.GetExtension() << endl;

//   return 0;
// }