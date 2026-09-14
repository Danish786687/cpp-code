#include <iostream>
#include <string>
using namespace std;

class Student {
public: // Made members public so they can be accessed from main()
    // Properties
    string name;
    float cgpa;

    // Methods / Member functions
    void getpercentage() {
        cout << (cgpa * 10) << endl;
    }
};

int main() {
    Student s1;

    // Optional: initializing properties
    s1.name = "John";
    s1.cgpa = 8.5;

    // Accessing member function and checking size
    s1.getpercentage();
    cout << "Size of object: " << sizeof(s1) << " bytes" << endl;

    return 0;
}