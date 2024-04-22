#include<iostream>
using namespace std;
#include<vector>
int main()
/*{
 array[]={4,3,1,6,7};
 int targetsum=7;
 int pairs=0;
 for(int i=0;i<6;i++){
  for(int j=i+1;j<6;j++){
   if(array[i]+array[j]==7){
    pairs++;
   }
  }
 }
 cout<<"pairs:"<<pairs<<endl;
 return 0;
}*/
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
   if(v[i]+v[j]==7){
    pairs++;
   }
  }
 }
 cout<<"pairs:"<<pairs<<endl;
 return 0;
}