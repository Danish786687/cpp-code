#include<iostream>
using namespace std;

class Student{
    
    //properties
    string name;
    float cgpa;

    //methods/memebr function/function
    void getpercentage(){
        cout<< (cgpa*10) << endl;
    }

};

int main(){

    Student s1;
   
    cout<< sizeof(s1) << endl;

    return 0;

}
