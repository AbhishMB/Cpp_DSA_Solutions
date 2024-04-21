#include<iostream>
using namespace std;
int main()
{
 int array[]={1,2,3,4,5};
 int max=array[0];
 for(int i=1;i<5;i++){
  if(array[i]>max){
   max=array[i];
  }
 }
 cout<<max<<endl;
 return 0;
}