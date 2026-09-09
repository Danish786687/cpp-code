#include<iostream>
using namespace std;


int * func(){

    int *ptr=new int;
    *ptr = 1200;
    cout<< " ptr points to :" << *ptr << endl ;

    // delete ptr; // used for free the allocated memory but we are returning the pointer so we should not delete it here otherwise it will give segmentation fault

    return ptr;
 }

 int main(){
    int *x = func();
    cout<< *x << endl;
    return 0;
 }
    