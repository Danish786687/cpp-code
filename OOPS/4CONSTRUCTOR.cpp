#include<iostream>
#include<string>
using namespace std;

class Car{
    string name;
    string color;

public:
    //constructor
    //constructuor wihtoutprarameter
    Car(){
        cout<< "constructuor without  parameter.." << endl;
    }
    //constructor parameter
    Car(string name ,string color){//OR colorval
        cout<< "construct with parameter..." << endl;
        this->name=name;
        this->color=color;
    }

    void start(){
        cout<< "car has started" << endl;
    }
    void stop(){
        cout<< "car has  stopped.." <<endl;
    }

    //getter
    string getname(){
        return name;
    }
    string getcolor(){
        return color;
    }
};

int main(){
    Car c0; // wihtout paramter
    Car c1("maruti 800","blue");   //parametr constructor
    Car c2("fortuner" , "white");
    cout<< "car name:" << c1.getname() << endl;
    cout << "car color name: " << c1.getcolor() << endl;;
    return 0;

}