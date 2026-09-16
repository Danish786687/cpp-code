#include<iostream>
#include<string>
using namespace std;

class Print{
public:
 
    void show(int x){
        cout << x << endl;
    }

    void show(string str){
        cout<< str << endl;
    }

};

int main(){
    Print p1;
    p1.show(33);
    p1.show("DANISH");
    return 0;
}