#include<iostream>
using namespace std;

class A{
    string secret="secraet data";
    friend class B;
    friend void revealsecret(A &obj);
};

class B{  //become A friend class of A
public:
    void showsecret(A &obj){
        cout<< obj.secret <<endl;
    }
};

void revealsecret(A &obj){
    cout<< obj.secret << endl;
}

int main(){
    A a1;
    B b1;

    // b1.showsecret(a1);
    revealsecret(a1);
    return 0;
}