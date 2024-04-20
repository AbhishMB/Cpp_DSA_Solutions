/// Given an array containing non zeroes and zeroes modify array such that the all the zeroes are moved to the right of the array?



#include <iostream>
#include <algorithm>
using namespace std;

int main(){
 int arr[8]={1,0,3,2,0,5,0,8};
 int size= 8;
 int i=0;
 for(int j=0;j<size;j++){
   if(arr[j]!=0){
     swap(arr[j],arr[i]);
     i++;
   }
 }
int j=0;
 while(j<size){
   cout<<arr[j]<<" ";
   j++;
 }

  return 0;
}
