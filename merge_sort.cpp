#include <iostream>
//#include <array>
using namespace std;

int main(){
  int arr[7]={1,3,5,6,8,11,16};
  int arr2[9]={2,4,7,9,10,12,13,14,15};
  

  int m=7;
  int n=9;
  int s=n+m;
  int arr3[s];
  int k=0,i=0,j=0;
  while(i<m && j<n){
       if(arr[i]<arr2[j]){
            arr3[k++]=arr[i++];
        }
        else if(arr[i]>arr2[j]){
          arr3[k++]=arr2[j++];

        }
 
  } 
 
  while(i<m){
    arr3[k++]=arr[i++];
  }
  while(j>n){
    arr3[k++]=arr2[j++];
  }
int size= m+n;
int index=0;
  while(index < size){
    cout<<arr3[index]<<" ";
    index++;
  }
  return 0;
}

