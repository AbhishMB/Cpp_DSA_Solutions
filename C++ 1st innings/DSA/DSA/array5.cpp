#include<iostream>
using namespace std;
int main()
{
 int array[]={1,2,3,4,5};
 int lenth=sizeof(array)/sizeof(array[0]);
 int sum=0;
 for(int i=0;i<lenth;i++){
  sum+=array[i];
 }
 cout<<sum<<endl;
 return 0;
}