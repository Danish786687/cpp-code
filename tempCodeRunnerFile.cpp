#include<iostream>
using namespace std;
int main(){
    char ch='d';
    char *ptr=&ch;
    cout<<ptr<<endl;/////1st
    ptr++;    //////////1st same as 3rd 
    cout<<ptr<<endl;