#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // char ch='a';
    // cout<< (int)ch<< endl;
    // char st='A';
    // cout<< (int)st << endl;

    // a,b,c,d,e,f,g,h....(to get the postionb of 'f')
    // char ch='f';
    // int pos= ch - 'a';
    // cout<< pos << endl;  //return 5 as f have 5th postion in alpha
    // return 0;

    // CHRTR ARRAY(specially useed tos torethe string)

    // char arr[5]={'a','b','c','d','e'};
    //  cout<< arr[0] << endl ;
    //  cout<< arr[1] << endl ;
    //  cout<< arr[2] << endl ;
    //  cout<< arr[3] << endl ;
    //  cout<< arr[4] << endl ;

    char arr[5]={'a','b','c','d','\0'};
     cout<< arr << endl ;

     //"danish is my name" // striing literls
     // "hello" // stirng literal there value is not changes

     char work[]="code";  //last me null chrtr hoga
     cout<< work << endl;
     char work1[5]="code";
     cout << work1 << endl;

     char work3[50]={'c','o','d','e','\0'};
     cout<< work3 << endl;

     cout<< strlen(work3) <<endl ;

}