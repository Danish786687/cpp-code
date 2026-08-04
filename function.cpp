// // // // #include<iostream>
// // // // using namespace std;

// // // // int sum(int a,int b=10){   // 10 is default value
// // // //     int add=a+b;
// // // //     return add;
// // // // }
// // // // int diff(int a,int b){
// // // //     int subt=a-b;
// // // //     return subt;
// // // // }


// // // // int main(){
// // // //     int s=sum(5,20);   // 5 and 8 are arguments
// // // //     cout<<"sum : "<<s<<endl;
// // // //     int d=diff(4,2);   // 4 and 2 are arguments
// // // //     cout<<"diiffeereence :" <<d<<endl;
// // // //     return 0;
// // // // }

// // // // #include<iostream>
// // // // using namespace std;

// // // // int x,y;
// // // // int multiply(int a,int b){
// // // //     int mul=a*b;
// // // //     return mul;
// // // // }

// // // // int main(){

// // // //     cout<<"1st number : ";
// // // //     cin>>x;
// // // //     cout<<"2nd number : ";
// // // //     cin>>y;
// // // //     int m=multiply(x,y);
// // // //     cout<<"multipilcation of 2 number : "<<m<<endl;
// // // //     return 0;
// // // // }
// // // // #include<iostream>
// // // // using namespace std;

// // // // int check(int a){
// // // //     if(a%2==0){
// // // //         cout<<"even number : "<< a << endl;
// // // //     }
// // // //     else{
// // // //         cout<<"odd number : "<<a << endl;
// // // //     }

// // // // }

// // // // int main(){
// // // //     check(90);

// // // //     return 0;

// // // // }

// // // #include<iostream>
// // // using namespace std;

// // // int factorial(int n){
// // //     int fact=1;
// // //     for(int i=1;i<=n;i++){
// // //         fact=fact*i;

// // //     }
// // //     return fact;
// // // }


// // // int main(){
// // //     cout<<factorial(0)<<endl;
// // //         cout<<factorial(1)<<endl;
// // //             cout<<factorial(2)<<endl;
// // //                 cout<<factorial(3)<<endl;




// // //     return 0;
// // // };

// // #include<iostream>
// // #include<cmath>
// // using namespace std; 

// // bool isprime(int n){
// //     if(n==1){    //1 also has only 1 factor so it is not prime number
// //         return false;
// //     }
// //     for(int i=2;i<=n-1;i++){    //need 2 factorts to be prime number
// //         if(n%i==0){     //more than 2 factors means not prime number
// //             return false;
// //         }

// //     }
// //     return true;

// // }

// // bool isprime2(int n){
// //     if(n==1){
// //         return false;
// //     }

// //     for(int i=2;i<=sqrt(n);i++){
// //         if(n%i==0){
// //             return false;        }
// //     }
// //     return true;
// // }


// // int main(){
// //     cout<< isprime2(1)<<endl;
// //     cout<< isprime2(2)<<endl;
// //     cout<< isprime2(3)<<endl;
// //     cout<< isprime2(4)<<endl;
// //     return 0;
// // }

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
        
//     }
//     return fact;
// }
// int bincoff(int n, int r){
//     int val1=factorial(n);
//     int val2=factorial(r);
//     int val3=factorial(n-r);
//     int bincoff=val1/(val2*val3);
// }

// int main (){
    
//     return 0;

// }
#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){

        if(n%i==0){
            return false;
        }
    }

    return true;
}

int allprime(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<endl;
            n++;

        }
    }
}

int main(){
    allprime(10);
    return 0;
}
