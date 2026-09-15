#include <iostream>
using namespace std;

class Student {
private:
    // Data hidden from outside
    string name;
    float cgpa;

public:
    // Setter - Validated data entry
    void setCgpa(float c) {
        if (c >= 0.0 && c <= 10.0) {
            cgpa = c;
        } else {
            cout << "Invalid CGPA!" << endl;
        }
    }

    // Getter - Safe data retrieval
    float getCgpa() {
        return cgpa;
    }
};

int main() {
    Student s1;

    // s1.cgpa = 11.0; ❌ Error: Direct access denied (Encapsulation)

    s1.setCgpa(8.8); // ✅ Controlled access via public method
    cout << "CGPA: " << s1.getCgpa() << endl;

    return 0;
}