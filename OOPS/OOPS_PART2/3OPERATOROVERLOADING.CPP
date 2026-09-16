#include<iostream>
#include<string>
using namespace std;

//OPERATOR OVERLOADING

class Complex{

int real;
int img;

public:
    Complex(int r,int i){
        real=r;
        img=i;
    }

    void shownum(){
        cout << real <<"+" << img << "i"<<endl ;
    }

    //oprator overlaoding
    Complex operator +(Complex &c2){
        int resreal=this->real +c2.real;
        int resimg=this->img +c2.img;
        Complex c3(resreal , resimg);
        return c3;
    }
 

};


int main(){
    Complex c1(1, 2);
    Complex c2(3, 4);
    c1.shownum();
    c2.shownum();

    Complex c3=c1+c2;
    c3.shownum();
    return 0;
}