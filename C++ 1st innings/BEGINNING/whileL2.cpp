#include<iostream>
using namespace std;

int main(){ 
 int sum=0;
 int i=1;
 int n;
 cin>>n;
 while(i<=n){
  sum+=i;
  i++;
 }
 cout<<sum<<endl;
 return 0;
}