#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int>arr,int target){
    int st=0;
    int end=arr.size()-1;
    int currsum=0;
    vector<int> ans;

    while(st<end){
        int currsum=arr[st]+arr[end];
        if(currsum==target){
            ans.push_back(st);
            ans.push_back(end);
            return ans;  //if found sum then exit  or it can use 

        }
        else if(currsum>target){
            end--;
        }
        else{
            st++;
        }
    }
    return ans;
}

int main(){
    vector<int>vec={2,7,11,15};
    int target = 9 ;
    vector<int>ans=pairsum(vec,target);
    cout<< ans[0] << "," << ans[1];
    return 0;
}
