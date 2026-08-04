// // #include<iostream>
// // using namespace std;
// // int main(){
// //     // int i;
// //     // for (i=1; i<=10 ;i++){
// //     //     cout<< i << "  ";      //NEVER USE RETURN INSIDE FOR LOOP //
        
// //     // }
// //     // cout<<"\nlast value of num : " <<i;
// //     // return 0;/
// //     int i;
// //     for(i=0 ; i<5 ; i++){
// //         cout<<"APNA COLLEGE\n";
// //     }
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){ 
// //     int n;
// //     cout<<"ENETR ANY NATURAL NO.. : ";
// //     cin>>n;
// // for(int i=1 ;i<=n ; i++){
// //     cout<< i <<"\n";
// // }
// // return 0;
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     // int i, n, sum=0;
//     // cout<<"enter n : ";
//     // cin>>n;

//     // for(i=1; i<=n ; i++){
//     //     sum=sum+i ;
//     // }
//     // cout<<"sum of n natural no. : " <<sum ;
// int i=1,n=10,sum=0;
// while(i <=n){
//     sum+=i;
//     cout<< i << "   ";
//     i++;
// }
// cout<<"\nsum : "<<sum;
// cout<< "\n";
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int i,n;
//     cout<<"enetr n : ";
//     cin>>n;

//     for(i=n ; i>=1; i--){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int n , r, sum=0;
//     cout<<"enter number : ";
//     cin>>n;
     
//     while(n>0){
//         r=n%10;
//         sum=sum+r;
//         n=n/10;


//     }
//     cout<<"sum of digit of n : "<<sum;

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n,r,oddsum=0;
//     cout<<"enetr n : ";
//     cin>>n;
//     while(n>0){
//         r=n%10;
//         if(r%2!=0){
//             oddsum=oddsum + r;
//         }
//          n=n/10;
//     }
// cout<<"odd sum : " <<oddsum;
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int n,lastdig;
//     cout<<"enter n : ";
//     cin>>n;
//      while(n>0){
//         lastdig=n%10;
//         cout<<lastdig;

//         n=n/10;

//      }

// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n,ld,res=0;
//     cout<<"enter n : ";
//     cin>>n;

//     while(n>0){
//         ld=n%10;
//         res=res*10+ld;
//         n=n/10;
//     }
//     cout<<res<<endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1,ii=1;
//     do{
//         cout<< i << " ";
//         i++;
//     }while(i<7);

//     while(ii>7){
//       cout<< ii << " ";
//         ii++;  
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;

//     do{
//         cout<<"enetr no. : ";
//         cin>>n;
//         if(n%10==0){
//             break;
//         }
    
//     }while(true);

//     cout<<" you enter : "<< n<<endl;
// }
// #include<iostream>
// using namespace std;

// int main(){
//     int i;
//      for(i=1 ; i<10 ; i++){
//         if(i==3){
//             continue;

//         }
//         cout<<i<<endl;
//      }
// }

#include<iostream>
using namespace std;
int main(){
    int i;
    do{
        cout<<"enetr number : ";
        cin>>i;
         if(i%10==0){
            continue;
         } 
         cout << i << endl; 
    } while(true);
   return 0; 
}