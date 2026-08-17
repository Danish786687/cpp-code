#include<iostream>
using namespace std;

void spiral(int matrix[][4], int n, int m){  //1dimension must..col must
    int srow=0, scol=0;
    int erow=n-1 ,ecol=m-1;

    while(srow <= erow && scol <= ecol){ //odd matrix must have this case othersize middle one left

     //top

    for(int j=scol ; j<=ecol ; j++ ){
        cout<<matrix[srow][j]<<" ";
    }

    //right

    for(int i=srow+1 ; i<=erow ; i++){
        cout<< matrix[i][ecol]<<" ";
    }

    //bottom 
    for(int j=ecol-1 ; j>=scol ; j--){
        if(srow == erow){ //midddle
            break;
        }
        cout<<matrix[erow][j]<<" ";
    }

    //left
    for(int i=erow-1 ; i>=srow+1 ; i--){
        if(scol==ecol){
            break;
        }
        cout<<matrix[i][scol]<<" ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;

    }
    cout<< endl ;

}


int main(){

    int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    spiral(matrix,4,4);
    return 0;


}