#include<iostream>
using namespace std;
#include<vector>
int main()
{
 vector<int>v(6);
 for(int i=0;i<6;i++){
  cin>>v[i];
 }
 
int x;
cout<<"enter x :";
cin>>x;

int occurance=0;
for(int i=0;i<v.size();i++){
 if(v[i]==x){
  occurance++;
 }
}
cout<<occurance<<endl;
 return 0;
}