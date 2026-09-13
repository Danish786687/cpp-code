#include<iostream>
using namespace std;

int getithbit(int num,int i){
    int bitmask= 1 << i;

    if(!(num & bitmask)){
        return 0;
    }
    else{
        return 1;
    }
}


int main(){
    cout << getithbit(6,2) << endl;  //1
    cout << getithbit(7,5) <<endl ; //0

    return 0;
  

}