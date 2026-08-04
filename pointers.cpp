#include<iostream>
using namespace std;
int main(){
    int a=8;
    int *ptr=&a;

float pi=3.14;
float *ptr2=&pi;

    // cout<<&a<<"="<<ptr<<endl;
        // cout<<&pi<<"="<<ptr2<<endl;

        // cout<<sizeof(ptr)<<endl;
        // cout<<sizeof(ptr2);


    int **pptr=&ptr;
    cout<<&ptr<<"="<<pptr<<endl;

}

// derefence operator(*)

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     int *ptr=&a;
//     cout<< ptr <<endl;
//     cout<< *ptr <<endl;
// }
//NULL POINTER 
  
// #include<iostream>
// using namespace std;
// int main(){
//     int *ptr;
//      cout<<ptr<<endl; //garbage value

//      int *ptr1=NULL;
//      cout<<ptr1<<endl; //0 adress

//      cout<<*ptr1<< endl; //segmentation fault=no execution of code forward

//      cout<<"byeeee"<<endl; // this will not run
// }

// #include<iostream>
// using namespace std;

// // void changeA(int para){
// // para = 30; 
// //     cout<<para<<endl;
// // }

// void changeA(int *ptr){
//     *ptr=30;
//     cout<<*ptr<<endl;
// }

// int main(){
//     int a=10;
//     changeA(&a); //pass by refreence
// // changeA(a); //pass by valyue
//     cout<<a<<endl; 
    
// }

// #include<iostream>
// using namespace std;


// void changeA(int &param){ // param ref. variable bn jyega
//     param=30;
//     cout<<param<<endl;
// }


// int main(){
//     int a=12;
//     int &b=a;

//     // cout<<a<<endl;     //12
//     // cout<<b<<endl;     //12

//     // cout<<&a<<endl;          //0x61ff08
//     // cout<<&b<<endl;           //0x61ff08


// cout<<"before change: "<<a<<endl;
// changeA(a);
// cout<<a<<endl;

// }

#include<iostream>
using namespace std;
int main(){
    int x=5,y=10;
    int *ptr1=&x,*ptr2=&y;
    ptr2=ptr1;

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<&x<<endl;
    cout<<&y<<endl;
        cout<<ptr1<<endl;
            cout<<ptr2<<endl;
    
            int *p=0;
            cout<<p;  //return 0 as same as null pointer

}
