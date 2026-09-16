#include<iostream>
#include<string>
using namespace std;

class Parent{
    public:

    void show(){
        cout << "parents class shows...\n";
    }

    //virtual function
    virtual void hello(){
        cout<< "helllo parent...\n";
    }
};

class Child : public Parent{  //show func inherit hua
 public:

    //functoion overrridden
    void show(){
        cout << "childd class shows...\n";  //
    }

    void hello(){
        cout << "helllo childd...\n" ;
    }

};

int main(){
    Child c1; //child obj hmesha apne fucntion ko call kegaa naki parent wale ko bhallee hiw o inherit huaa ho
    Parent p1; //parwnt to apna h krga

    Parent *ptr;
    ptr=&c1;//run time binding due tom inherit
    ptr->hello(); //virual func02.

    // c1.show(); 
    // p1.show();

}