#include <iostream>
 using namespace std;

 int clear_ith_bit(int num,int i){
    int mask= ~(1<<i);
    num=num&mask;
    cout<< "after clear bit will be :" << num << endl;
    
 }

 int main(){
    clear_ith_bit(6,1);
 }

