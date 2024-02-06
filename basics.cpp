#include <iostream>
#include <algorithm>
using namespace std;

/*int fact(int x){
    if (x==0) return 1;
    else return (x*fact(x-1));
  }
int ncr(int n,int r){
  return fact(n)/(fact(n-r)*fact(r));
}*/

void reverse(int a[],int size){
  int *start=a;
  int *end=a+(size-1);

  while(start<=end){
    int temp=*start;
    *start=*end;
    *end = temp;
    start++;
    end--;
  }

}
void print(int a[],int size){
  for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
    
  }

}

int main(){

  //int arr[100]={ [50]=1 };   //working
  //fill_n(arr,50,-1);
  //fill_n(arr,51,98,-2);
 // int arr[100] = {
   //     [0 ... 49] = -1,    // Initialize elements 0 to 49 with -1
     //   [50 ... 98] = -2    // Initialize elements 50 to 98 with -2
    //};//int m=8;
//int n= m & 1;
 // cout<<n<<endl
/*int n;
 
 int i=0;
 while(i!=100){
   n=arr[i];
   cout<<n<<" ";
   i++;
 }*/
  int arr[7]={8,23,78,45,72,4,9};

  reverse(arr,7);
  print(arr,7);
  


  //cout<<ncr(10,2)<<endl;
  return 0;
}
