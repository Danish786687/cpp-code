#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    float cgpa;

public:

    //methods/memebr function/function
    void getpercentage(){
        cout<< (cgpa*10) << endl;
    }

//SETTERS......Setter function to modify private data safely
void setname(string nameval){
    name=nameval;
}

void setcgpa(float cgpaval){
    cgpa=cgpaval;
}

//GETTERS.....
string getname(){
    return name;
}

float getcgpa(){
    return cgpa;
}

};


int main(){
    Student s1;
    // s1.cgpa = 8.5; // ❌ ERROR: 'cgpa' is private

    s1.setname("danish");
    s1.setcgpa(9.3);


    cout<< s1.getname() << endl ;
    cout << s1.getcgpa() << endl;

    return 0;

}
