// #include<iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"enter n : ";
//     cin>>n;

//     bool isprime=true;
//      for(i=2 ;i<=n-1 ; i++){
//         if(n % i==0){
//             isprime=false;
//             break;
//         }
//      }
//      if(isprime==true){
//         cout<<" prime number"<<endl;

//     }
//     else{
//         cout<<"not prime ";
//     }
// }

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,i;
    cout<<"enter n : ";
    cin>>n;

    bool isprime=true;
     for(i=2 ;i=sqrt(n) ; i++){
        if(n % i==0){
            isprime=false;
            break;
        }
     }
     if(isprime==true){
        cout<<" prime number"<<endl;

    }
    else{
        cout<<"not prime ";
    }
}