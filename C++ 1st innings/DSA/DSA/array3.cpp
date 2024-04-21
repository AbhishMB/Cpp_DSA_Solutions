#include<iostream>
using namespace std;
int main()
{
 int array[]={1,2,3,4,5};
 int length=sizeof(array)/sizeof(array[0]);
 /*for(int idx=0;idx<5;idx++){
  cout<<array[idx]<<endl;
 }*/
 for(int ele:array){
  cout<<ele<<endl;
 }
 return 0;
}