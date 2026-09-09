#include<iostream>
using namespace std;

void funcint(){
    int *ptr=new int;
    *ptr=5;

    cout<< *ptr << endl;

    delete ptr; // free the allocated memory
}

// void func(){
    
//     int arr[100]={3,4,2,5,4,22};
//     for(int i=0 ; i<6 ;i++){
//         cout<< arr[i]<<" ";


// }
// }

void func(){
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

    delete [] arr; // free the allocated memory


}


int main(){
    func();
    funcint();
    // // int arr[100]={2,3,4,2,5,2};
    //  int size;
    //  cout  <<"enter size : ";
    //  cin >> size;

    //  int *arr=new int[size];
    
    //  int x=1;
    // for(int i=0 ; i<size ;i++){
    //     arr[i]=x;
    //     cout<< arr[i]<< " ";
    //     x++;

    // }
    // cout<< endl;



}