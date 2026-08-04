// #include<iostream>
// using namespace std;
// int main(){

//     // float marks;
//     // cout<<" enter your  marks : ";
//     // cin>>marks;

//     // if(marks>=33){
//     //     cout<<"passs \n";
//     // }
//     // if(marks<33){
//     //     cout<<" fails";

//     // }


//     // int a,b;
//     // cout<<"enter 1 no. : ";
//     // cin>>a;
//     // cout<< "enetr 2 no. : ";
//     // cin>>b;

//     // if(a>b)
//     // {
//     //     cout<<"a is bigger : "<<a;

//     // }
//     // else{
//     //     cout<<" b is bigger : "<<b;
//     // }

//     // int a ;
//     // cout<<"enter the number : ";
//     // cin >> a;
    
//     // if(a%2==0){
//     //     cout<<" a is even no. : "<<a;

//     // }
//     // else{
//     //     cout<<"a is odd no. : "<<a;
//     // }

//     // int mark;
//     // cout<<"enter your mark : ";
//     // cin>> mark;

//     // if (mark>=90){
//     //     cout<<"a grade\n";
        
//     // }
//     // else if(mark>=80){
//     //     cout<<"b grade\n";

//     // } else{
//     //     cout<<" c grade\n";
//     // }

// //     float income,tax;
// //     cout<<"enter income : ";
// //     cin>> income;

// //     if(income<50){
// //         tax=0;
// //         cout<<"no taxes required";
    
// //     }
// //     else if(income<=100){
// //         tax=(income*.20);
// //         cout<<"taxes = "<< tax;
// //     }
// //     else{
// //         tax=(income*.30);
// //         cout<<"taxes = "<<tax;

// //     }

// // int a ,b , c;

// // cout<<"enter the 1number : ";
// //  cin >> a;
// // cout<<"enter the 2number : ";
// //  cin >> b;
// // cout<<"enter the 3number : ";
// //  cin >> c;

// //  if((a>=b) && (a>=c)){
// //     cout<<"a is bigger";

// //  }
// //  else if(b>=c){
// //     cout<<"b is bigger";

// //  }
// //  else{
// //     cout<<"c is bigger";
//  //}

// //  bool isadult;
// //  int age;
// //  cout<<"enetr age : ";
// //  cin>>age;

// //  isadult=(age>18)? true : false ;
// //  cout<<isadult;

// // int a;
// // cout<<"enter 1 number : ";
// // cin>>a;
// // int b;
// // cout<<"enter 2 number : ";
// // cin>>b;

// // int max;
// // max=(a>=b) ? a : b ;

// // cout<<"maximum is : "<<max ;

// int a;
// cout<<"enter 1 number : ";
// cin>>a;

// int even=(a%2==0) ? true : false ;

// cout<<even;



// }
// ............CALCULATOR......

#include<iostream>
using namespace std;
int main(){
//  
 int a , b ;
 char op;
 cout<<"enetr 1 num : ";
 cin>>a;

 cout<<"enetr 2 num : ";
 cin>>b;

 cout<<"enetr operation : * or - or + or /    :  ";
 cin>>op;

//  if (op=='+'){
//    cout<<"add : "<<(a+b)<<endl;

//  }

//  else if(op=='-'){
//    cout<<"subtract : "<<(a-b)<<endl;

//  }
//  else if(op=='*'){
//    cout<<"multiply : "<<(a*b)<<endl;

//  }
//  else if(op=='/'){
//    cout<<"divide : "<<(a/b)<<endl;

//  }
//  else{
//    cout<<"invalid operation";
   
//  }

switch(op){

   case '+' : cout<<"add : "<<(a+b)<<endl;
            break;
   case '-' : cout<<"subtract : "<<(a-b)<<endl;
            break;

   case '*' : cout<<"multiplay : " <<(a*b)<<endl;
            break;

   case '/' : cout<<"divide : "<< (a/b)<<endl;
            break;

      default : cout<< " invalid oper...";

}
 

}