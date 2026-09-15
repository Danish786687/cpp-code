#include <iostream>
#include<string>
using namespace std;

class Animal{

    string color;
public:

    void eat(){
        cout << "eats" << endl;
    }

    void breathe(){
        cout<< " breathe" << endl;
    }

};

class Fish : public Animal{  // inherit
public:
    int fins;

    void swim(){
        //eat();  // derived om useed protect4ed
        cout<< "swims" << endl;
    }
};


int main(){
    Fish f1;
    f1.fins = 3;
    cout<< f1.fins <<endl;
     f1.eat();
     f1.swim();
     f1.breathe();
}