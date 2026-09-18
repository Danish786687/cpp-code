#include<iostream>
using namespace std;

//use of stativ cin fn
// void counter(){
//     static int count=0;
//     count++;
//     cout<<"count: "<<count << endl;
// }

class Example{
public:
    static  int x;  //not ininalaise in insiialze

};

//int Example::x=0; ///when const are not used in classss
int main(){
    // counter();
    // counter();
    // counter();

    Example eg1,eg2,eg3;
    cout<< eg1.x++<<endl;  //without static all 0
    cout<< eg2.x++<<endl;
    cout<< eg3.x++<<endl; //0,1,2

}