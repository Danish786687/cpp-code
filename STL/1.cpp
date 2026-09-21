#include<bits/stdc++.h>
using namespace std;

//pairs
void explainpair(){
    pair<int ,int> p={1,3};
    cout << p.first << " " << p.second << endl ; 

    pair<int, pair<int,int>> z={1,{3,4}};
    cout << z.first << " " <<z.second.second << " " << z.second.first << endl;

    pair<int,int> arr[]={{1,2},{3,4}};
    cout<< arr[1].second; //4
}

//vector fucntion
void explainvector(){
    vector<int> v; ///vector  create empty containr dma

    v.push_back(1);
    v.emplace_back(2); //dyanmically increase size and it is fast than push_back

    vector<pair<int,int>> vec;
    
    vec.push_back({1,2});
    vec.emplace_back(1,2);  //this one is also in pair
    
    vector<int> v2(5,100);  //array of size of 5 and element is 100;

    vector<int> v1(5);  //array of size of 5 and element is 0;






}

int main(){
    explainpair();
}
