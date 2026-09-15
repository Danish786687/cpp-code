#include <iostream>
#include<string>
using namespace std;

class Teacher{
public:
    int salary;
    string subject;
};

class Student{
public:
    int rollno;
    float cgpa;
};

class TA: public Teacher , public Student{
public:
    string name;
};

int main(){
    TA ta1;
    ta1.name="Danish khan";
    ta1.subject="cpp";
    ta1.rollno=900;
    ta1.salary=89898;

    cout<< ta1.name << endl;
    cout<< ta1.subject << endl;
    cout<< ta1.rollno << endl;
    cout<< ta1.salary<< endl;

    return 0;

}