//Here linked list can be declared, copied without
//initializing nodes
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

   //int arr[10];
   //for(int i=0;i<10;i++){
   // cin>>arr[i];
   //}
    //list<int>myList(arr,arr+10);

   vector<int>vec={10, 20, 30, 40,50};
   list<int>mylist(vec.begin(), vec.end());
    for(auto it=mylist.begin(); it!=mylist.end();it++){
        cout<<*it<<" ";
    }

  
  //for(int value: mylist){
  //  cout<<value<<endl;
  //}
return 0;
}
