#include <iostream>
using namespace std;

void updateithbit(int num,int i,int val){
    num = num & ~(1<<i); // clear ith bit

    num=num | (val << i);

    cout << num << endl;
}
 


int main(){
    updateithbit(7,3,1);
    return 0;

}

