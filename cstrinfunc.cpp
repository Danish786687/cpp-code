// // strcpy(dest,src)  >> to copy from soruce to destination.

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char str1[100];
//     char str2[]="hello world";
//     strcpy(str1,"danish khan");   //overwrite the data  danish khan will not store in str1 hello worldmwill store
//     strcpy(str1,str2);
//     cout<< str1 << endl;
// }

// strcat(str1,str2) >>TO CONCATENATE/JOIN STR1 AND STR2 amd str1 will update as sum of both

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char str1[]="danish";
//     char str2[]="khan";
//     strcat(str1,str2);
//     cout<< str1 << endl;  //danishkhan
//     cout<< str2 << endl;  //khan

// }

//# strcmp(str1,str2)  >> (COMPARE TWO STRING)
// 0 >>>>>>>>>>>>>>> if both are equal
// postive value >> if str1 is  large   (acc. to the ASCII value of each letter first)
// nagative value >> if str1 is small

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[]="zaaaaa";
    char str2[]="xyz";
    cout << strcmp(str1,str2) << endl;
}