#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string name;
        string color;
        int *mileage;
    
    Car(string name,string color){
        this ->name = name;
        this ->color = color;
        mileage = new int; //dynamic allocation
        *mileage=12;
    }
    Car(Car &original){
        cout<< "copying origignal tonew";
        name=original.name;
        color=original.color;
        mileage = new int; //deepcopy
        *mileage=*original.mileage;
    } //by default same hn

    ~Car(){
        cout<< "deleting object.......\n";
        if(mileage!= NULL){
            delete mileage;  // after deletign garbage value assign
            mileage=NULL; ///expliictyt null
        }
    }
};

int main(){
    Car c1("maruti" , " white");
    Car c2(c1);  

    cout<< c2.name << endl;
    cout<< c2.color  << endl;
    cout<< *c2.mileage << endl;

    *c2.mileage = 10;

    cout<< *c1.mileage << endl ; //10
    
    

}