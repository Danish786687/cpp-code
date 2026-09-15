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

class User{
    //properties  // by default this is private
    string username;
    string passwrod;
    string bio;

    //method
    void deactivate(){
        cout<< "deleting the account." << endl;
    }
    void editbio(string newbio){
        bio=newbio;
    }
};


int main(){
    //object 1
    Student s1;
    cout<< sizeof(s1) << endl;
   
    //object 2
    Student s2;

    return 0;

}
