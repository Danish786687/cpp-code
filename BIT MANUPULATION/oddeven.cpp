#include<iostream>
using namespace std;

void oddeven(int num){
    if(!(num & 1)){
        cout<< "even number \n";
    }
    else{
        cout<< "odd number\n ";
    }
}

int main(){
    oddeven(5);
    oddeven(70);

}