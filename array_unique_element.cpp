#include <iostream>
using namespace std;

int uniqueElement(int a[],int size){

  int i=0;
  int unique=0;
  while(i<size){
    unique = unique^a[i];
    i++;
  }

  return unique;
}

int main(){

  int arr[7]={2,4,2,6,7,4,7};
  cout<<uniqueElement(arr,7)<<"\n";

  return 0;
}
