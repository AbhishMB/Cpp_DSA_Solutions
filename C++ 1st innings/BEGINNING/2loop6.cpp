#include<iostream>
using namespace std;
int main()
{ 
 int n,m;
 cin>>n>>m;
 int result=1;
 while(m>0){
  m;
  result*=n;
  m--;
 }
 cout<<result<<endl;
 return 0;
}