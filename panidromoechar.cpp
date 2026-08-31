#include<iostream>
#include<cstring>
using namespace std;

bool palindrome(char word[],int n){
    int st=0,end=n-1;

    while(st < end){
        if(word[st] != word[end]){
            cout<< " not valid palindrome" << endl ;
            return false;
        }
        st++;
        end--;
    }
    cout<< "valid palindorme" << endl;
    return true;
}

int main(){
    char word[]="racecar";
    palindrome(word,strlen(word));
    return 0;


}