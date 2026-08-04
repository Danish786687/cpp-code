// // // // // // #include<iostream>
// // // // // // using namespace std;
// // // // // // int main (){
// // // // // //     int n=5;
// // // // // //     int i,j;
// // // // // //     for(i=1 ; i<=n ; i++){

// // // // // //         for(j=1 ;j<=n;j++){
// // // // // //             cout<<i<<" ";
// // // // // //         }
// // // // // //         cout<<endl;
// // // // // //     }
// // // // // // }


// // // // //   // star pattern
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int i,j;
// // // // //     int n=6;
// // // // //     for(i=1 ; i<=n ;i++){
// // // // //         for(j=1 ; j<=i; j++){
// // // // //             cout<<"*";
// // // // //         }  
// // // // //     cout<< endl;
// // // // // } 
// // // // // }         
// // // // // inverted star pattern
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int i,j , n=7 ;
// // // // //     for(i=1 ; i<=n ; i++){
// // // // //         for(j=n ;j>=i;j--){   //or by j=1 to j=4-i+1 or j++
// // // // //             cout<<"*"<<" ";

// // // // //         }
// // // // //         cout<<endl;
// // // // //     }
// // // // // }

// // // // //half pyramid......  
// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int i,j,n=10;
// // // // //     for(i=1 ;i<=n;i++){
// // // // //         for(j=1;j<=i;j++){
// // // // //             cout<<j;

// // // // //         }
// // // // //         cout<<endl;
// // // // //     }
// // // // // }

// // // // #include<iostream>
// // // // using namespace std;
// // // // int main (){
// // // //     int i, j,n=7;
// // // //     char ch='A';
// // // //     for(i=1;i<=n;i++){
// // // //         for(j=1;j<=i;j++){
// // // //             cout<<ch;  //or cout<<ch++   increament concept         
// // // //             ch++;

// // // //         }
// // // //         cout<<endl;
// // // //     }
// // // // }

// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int i, j;
// // //     int n=4;
// // //     for(i=1;i<=n;i++){
// // //         cout<<"*";
// // //         for(j=1;j<=n-1;j++){
// // //             if(i==1 || i==n){
// // //                 cout<<"*";
// // //             }
// // //             else{
// // //                 cout<<" ";
// // //             }

            
// // //         }
// // //         cout<<endl;    
// // //     }
// // //     return 0;    
// // // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int i,j,n=4;
// //     for(i=1;i<=n;i++){
// //         //spaces
// //         for(j=1;j<=n-i;j++){
// //             cout<<" ";
// //         }
// //         // for star
// //         for(j=1;j<=i;j++){
// //             cout<< "*";
// //         }
// //         cout<<endl;
// // }
// //     }


// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int i , j , n=4,x=1;
// //     for(i=1;i<=n;i++){
// //         for(j=1; j<=i;j++){
// //             cout<<x<<" ";
// //             x++;

// //         }
// //         cout<<endl;
// //     }
// // }


// #include<iostream>
// using namespace std;
// int main(){
//     int i,j,k,n=4;
// //     // 1st pyramid

//     for(i=1;i<=n;i++){
//         // spaces
//         for(j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         // stars
//         for(k=1;k<=(2*i-1);k++){
//             cout<<"*";
//         }
//         cout<<endl;

//  }

// // 2nd pyramid
// for(i=n;i>=1;i--){
//     // stars
//     for(j=1;j<=n-i;j++){
//         cout <<" ";

//     }
//     for(j=1;j<= 2*i-1; j++){
//         cout<<"*";
//     }
//       cout<<endl;
//     }
// } 

#include<iostream>
using namespace std;
int main(){
    int i,j,n=6;
    // upper pyramid
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";

        }
        for(j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    

for(i=n;i>=1;i--){
    for(j=1;j<=i;j++){
        cout<<"*";
    }
     for(j=1;j<=2*(n-i);j++){
        cout<<" ";
     }


    for(j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;

}


}
