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
        this->name=name; //nameval
        this->color=color; //colorval
    }
    //settter
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

// #include <iostream>
// using namespace std;

// class Student {
// public:
//     Student() {
//         cout << "1. Constructor Executed!" << endl;
//     }
// };

// int main() {
//     cout << "Start of Main" << endl;

//     Student s3; // <-- Yahan pehle Constructor chalega

//     cout << "2. Code after s3 creation" << endl; // <-- Ye line baad me chalegi

//     return 0;
// }


// // Sahi tareeka (this ka use karke - Name same ho sakte hain)
// Car(string name, string color) {
//     this->name = name;   // Class variable = Parameter variable
//     this->color = color;
// }

// // Without 'this' (Name alag rakhne padenge)
// Car(string n, string c) {
//     name = n;   // Direct assign ho gaya
//     color = c;
// }