#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
    
    Car(string name,string color){
        this ->name = name;
        this ->color = color;
    }
};

int main(){
    Car c1("maruti" , " blue");
    Car c2(c1);

    cout<< c1.name << endl;
    cout<< c2.name << endl;
    cout<< c1.color << endl;
    cout<< c2.color << endl;
    
    

}