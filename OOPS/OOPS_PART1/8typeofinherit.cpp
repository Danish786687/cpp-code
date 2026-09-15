#include <iostream>
#include<string>
using namespace std;

class Animal{
public:

    void eat(){
        cout<< "eats" << endl;;
    }

    void breathe(){
        cout<< "breathe" << endl;
    }
};

class Mammal : public Animal{
public:
    string bloodtype;
    Mammal(){
        bloodtype="warm" ;
    }
};

class Dog : public Mammal{
public:
    void tailwag(){
        cout<< "a dog wag its tail\n";
    }
};


int main(){
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tailwag();
    cout << d1.bloodtype << endl;

    return 0;


}