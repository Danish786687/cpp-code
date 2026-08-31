// #include <iostream>
// #include <cstring>

// using namespace std;

// void toUpper(char word[], int n) {
//     for (int i = 0; i < n; i++) {
//         char ch = word[i];
//         if (ch >= 'A' && ch <= 'Z') { //upper case
//             continue;
//         } else {                   //lower case
//             word[i]=ch-'a'+'A';
//         }
//     }
// }

// int main() {
//     char word[] = "ApnaCollege";
    
//     toUpper(word, strlen(word));
    
//     cout << word << endl; // Output: APNACOLLEGE
    
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// void toupper(char word[],int n){

//     for(int i=0 ; i<n ;i++){
//         char ch=word[i];
//         if(ch>= 'A' && ch<='Z'){
//             continue;
//         }
//         else{
//             word[i]=ch-'a'+'A';
//         }
//     }

// }

// int main(){
//     char ch[]="danish";
//     toupper(ch,strlen(ch));

//     cout << ch << endl ;
//     return 0;


// }


// UPPER TO LOWER ALL STRING CHRTR 

#include<iostream>
#include<cstring>
using namespace std;

void tolower(char word[],int n){

    for(int i=0 ; i<n ; i++){
        char ch=word[i];
        if(ch >= 'a' && ch <= 'z'){
            continue;
        }
        else{
            word[i]=ch-'A'+'a';
        }
    }
}

int main(){
    char word[]="DANISH KHAN IS MY SON";
    tolower(word,strlen(word));
    cout<< word << endl;
    return 0;


}