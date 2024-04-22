#include<iostream>
using namespace std;
#include<vector>
int main()

{
 vector<int>v(6);
 for(int i=0;i<6;i++){
 cin>>v[i];
 }
 int targetsum;
 cout<<"enter targetsum:";
 cin>>targetsum;
 int pairs=0;
 for(int i=0;i<6;i++){
  for(int j=i+1;j<6;j++){
    for(int k=j+2;j<6;j++){
   if(v[i]+v[j]+v[k]==targetsum){
    pairs++;
   }
   }
  }
 }
 cout<<"pairs:"<<pairs<<endl;
 return 0;
}