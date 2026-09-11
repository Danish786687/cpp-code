#include <iostream>
 using namespace std;

 bool checkpower2(int num){   //2,4,8,32,64,128,256 are power of 2
    if(num & (num-1)){
        return false;
    }
    else{
        return true;
    }
    
 }

 int main(){  // num shold grater than 0... we add num>0
    cout<< checkpower2(2) << endl;
    cout<< checkpower2(32) << endl;
    cout<< checkpower2(4) << endl;
    cout << checkpower2(16) << endl;
    cout<< checkpower2(3) << endl;
    cout<< checkpower2(90) << endl;
    cout<< checkpower2(5) << endl;
    cout << checkpower2(116) << endl;
    cout << checkpower2(256) << endl;

}