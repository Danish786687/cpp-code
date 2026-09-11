#include <iostream>
using namespace std;

int set_ith_bit(int num,int i){
    int bitmask = 1 << i;
    if(num|bitmask){
        return (num | bitmask);
    }
}

int main(){
    cout<< set_ith_bit(6,3) <<endl;
}