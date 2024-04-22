#include<iostream>
using namespace std;
 int main()
 { 
  int array[]={1,2,3,4,5};
  cout<<sizeof(array)<<endl;
  cout<<sizeof(array)/sizeof(array[0]);
   return 0;
 }