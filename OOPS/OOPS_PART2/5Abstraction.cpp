#include<iostream>
using namespace std;

class Shape{   //abstract class
    public:
    virtual void draw()=0; //pure virtual function(abstract func)

};

class Circle: public Shape{
    public:
    void draw(){
        cout<<"draw circle..\n" ;
    }

};

class Square: public Shape{
    public:
    void draw(){
        cout<<"draw square.....\n" ;
    }

};

int main(){
    Circle c1;
    c1.draw();

    Square s1;
    s1.draw();

    // Shape d1;  //abstract class does not create object
    // d1.draw();

}