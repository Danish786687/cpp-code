#include<iostream>
using namespace std;

// // brute force == O(n^2)

// int search(int mat[][4], int n,int key){
//     for(int i=0; i<n ; i++){
//         for(int j=0 ; j<n ;j++){
//             if(mat[i][j]==key){
//                 cout<< "i="<< i <<"j="<< j ;
//             }
            
            
//             }
//         }
//         return -1;
//     }

//STAIR CASE SEARCH: o(n+m)

bool search(int mat[][4],int n, int m,int key){
    int i=0 , j= m-1;
    while(i<n && j>=0 ){
        if(mat[i][j] == key){
            cout<< "found at cell (" <<i<<"," << j <<")\n";
            return true;
        }
         else if( mat[i][j] > key){
          //left
        j--;  
         }
         else{
            //right
            i++;
        }
    
    }
    cout<< "key not found";
    return false;
}

int main(){
    int matrix[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int key=130;
    search(matrix,4,4,key);
    return 0;
}