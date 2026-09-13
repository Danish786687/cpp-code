#include<iostream>
using namespace std;

void clrlastithbit(int num,int i){
    int bitmask= ~0<<i;
    num = num & bitmask;
    cout<< num << endl;

}

int main(){
    clrlastithbit(15,2);

}
