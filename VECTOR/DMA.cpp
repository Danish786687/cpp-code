#include<iostream>
using namespace std;
int main(){
    // int arr[100]={2,3,4,2,5,2};
     int size;
     cout  <<"enter size : ";
     cin >> size;

     int *arr=new int[size];
    
     int x=1;
    for(int i=0 ; i<size ;i++){
        arr[i]=x;
        cout<< arr[i]<< " ";
        x++;

    }
    cout<< endl;


}