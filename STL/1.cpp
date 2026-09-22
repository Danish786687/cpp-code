// // #include<bits/stdc++.h>
// // using namespace std;

// // //pairs
// // void explainpair(){
// //     pair<int ,int> p={1,3};
// //     cout << p.first << " " << p.second << endl ; 

// //     pair<int, pair<int,int>> z={1,{3,4}};
// //     cout << z.first << " " <<z.second.second << " " << z.second.first << endl;

// //     pair<int,int> arr[]={{1,2},{3,4}};
// //     cout<< arr[1].second; //4
// // }

// // //vector fucntion
// // void explainvector(){
// //     vector<int> v; ///vector  create empty containr dma

// //     v.push_back(1);
// //     v.emplace_back(2); //dyanmically increase size and it is fast than push_back

// //     vector<pair<int,int>> vec;
    
// //     vec.push_back({1,2});
// //     vec.emplace_back(1,2);  //this one is also in pair
    
// //     vector<int> v2(5,100);  //array of size of 5 and element is 100;
// //  vector<int> v1(5);  //array of size of 5 and element is 0;
// // vector<int> v3(5,20);  //array of size of 5 and element is 20;
// // vector<int> v4(v3);   //copy of v3

// // ////how toa ccesss elelemnt in vector

// // vector<int>::iterator it =v.begin();   //iterator gives address(memmory where the element lie) and begin() is show  pointer at the begining
// // it++;
// // cout<< *(it) <<" ";  //print all elelmnt one by one

// // it=it+2;
// // cout << *(it) << " ";


// // vector<int>::iterator it =v.end(); //show the address of the element after the last ekement
// // vector<int>::iterator it =v.rbegin(); //exact last .
// // vector<int>::iterator it =v.rend();  //befor the first

// // cout<< v[0] <<" " <<v.at[0];  //same

// // cout<< v.back()<< " ";  //last element

// // for(vector<int>::iterator it=v.begin(); it !=v.end(); it++){  //acccess arr elelemtn
// //     cout<< *(it) << " ";
// // }

// // for(auto it=v.begin(); it !=v.end(); it++){  // removing iterrotor by the use of  auto
// //     cout<< *(it) << " ";
// // }


// // for(auto it: v){
// //     cout<< it << " ";///automatic access all element
// // }

// // //* .erase(st,end)   st=begin()+1(inlcuded)   end=begin+3 (notinlcuded) i.e. after last del element
// // //{10,20,30}
// // v.erase((v.begin())+1);


// // //{10,20,30,40,50}
// // v.erase((v.begin)+2 , v.begin() +4); ////{10,20,50} left after del

// // //*INSERT
// // vector<int> v(2,100);  //{100,100}
// // v.insert(v.begin(),300); //{300,100,100}
// // v.insert(v.begin()+1,2,10);  //{300 ,10 ,10, 100 ,100}

// // //copy
// // vector<int> copy(2,50);  //{50,50}
// // v.insert(v.begin() , copy.begin() , copy.end());   //{50,50,300,10,10,100,100}

// // //{10,20}
// // cout<< v.size(); //2

// // //{10,20}
// // v.pop_back(); //{10}

// // //v1->{1,2}
// // // v2->{3,4}
// // v1.swap(v2);   ////v1->{3,4}  //v2->{1,2}

// // v.clear(); // earase enitre vector

// // cout<<v.empty();  //return true if empty

// // }

// // void explainlist(){

// //     list<int> ls;
// //     ls.push_back(2);  //{2}
// //      ls.emplace_back(4); //{2,4}
     
// //      ls.push_front(5); //{5,2,4}
// //     ls.emplace_front(10);  //{10,2,4}

// //     //rest function are same as vector
// //     //begin ,end , rbegin, redn clear , insert,size,swap
// // }

// // //DQ

// // void explaindeque(){

// //     deque<int> dq;
// //     dq.push_back(1); //{1}
// //     dq.emplace_back(2);  //{1,2}
// //     dq.push_front(11); //{11,1,2}
// //     dq.emplace_front(12);  //{12,11,1,2}

// //     dq.pop_back(); //{12,11,1}
// //     dq.pop_front(); //{11,1}

// //     dq.back();
// //     dq.front();

// //     //rest function are same as vector
// //     //begin ,end , rbegin, redn clear , insert,size,swap


// // }


// // //stack>>lifo  >>bigo 1
// // void explainstack(){
// //     stack<int> st;
// //     st.push(1); //{1}
// //     st.push(2); //{2,1}
// //     st.push(3); //{3,2,1}
// //     st.push(4); //{4,3,2,1}
// //     st.emplace(5); //5,4,3,2,1}

// //     cout << st.top(); //5    "** st[0] is invalid one" 

// //     cout << st.pop(); //st look like {4,3,2,1}

// //     cout<< st.size(); //4

// //     cout<< empty(); //false

// //     stack<int> s1,s2;
// //     s1.swap(s2);


// // }

// // void explainqueue(){
// //     queue<int> q;
// //     q.push(1); //{1}
// //     q.push(2); //{1,2}
// //     q.emplace(3); //{1,2,3}

// //     q.back() +=5; //{1,2,8}

// //     cout<< q.back(); //print 8

// //     cout<< q.front();  //print 1

// //     cout<< q.pop(); //{2,8}

// //     //same swap emapty as astack
// // }

// // void explainextra(){  //{1,5,3,2}
// //     sort(a, a+n);   // [start,end) end not count
// //     sort(v.begin() ,v.end()); //{1,2,3,5}

// //     sort(a+2 , a+4); //{1,5,2,3}  only that part will sort

// //     sort(a, a+n , greater<int>);  //descending sort  {5,3,2,1}

// //     pair<int,int> a[]={{1,2},{2,1},{4,1}};

// //     sort(a,a+n,comp);


// //     int num=7;
// //     int cnt =__builtin_popcount();   //return  how  many 1 is there in binary format
    
// //     string s="123";
// //     sort(s.begin(),s.end()); //always sroted one
// //      do{
// //         cout<< s << endl;
// //     } while(next_permutation(s.begin(),s.end()));

// //     int maximum= *max_element(a,a+n);  //it give address if give sta then givee eleemnt
// // }



// // }

// // int main(){
// //     explainpair();
// // }



// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={1,2,3,4};
   
//     int n=sizeof(arr)/sizeof(arr[0]);
//      int nums[n];
//     for(int i=0;i<n;i++){

//         if(i==0){
//             nums[0]=arr[0];
//         }

//         else if(i>0){
//             nums[i]=arr[i--]+arr[i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<nums[i] <<"," ;
//     }
// }


#include<iostream>
#include<string.h>

using namespace std;

    int lwsize(string arr){
    for(int i=-1;i<0;i--){
        if(i == _SPACE){
            int size=arr.size() ;
            return size;
            
}
}
    }
 
int main(){
    lwsize("Hello World");
    return 0;

}