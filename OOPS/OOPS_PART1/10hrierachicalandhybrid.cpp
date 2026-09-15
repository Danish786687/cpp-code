#include <iostream>
#include<string>
using namespace std;

class Animal{
public:
    void eat(){
        cout<< "eats" << endl;
    }
};

class Bird :public Animal{
public:
    void fly(){
        cout<< "fly...\n";
    }
};

class Fish : public Animal{
public:
    void swim(){
        cout<< "swims...\n";
    }
};

class Mammal : public Animal{
public:
    void walk(){
        cout<< "walk...\n";
    }
};


int main(){

    Mammal m1;
     m1.eat();
     m1.walk();

     Bird b1;
     b1.eat();
     b1.fly();

     return 0;

};