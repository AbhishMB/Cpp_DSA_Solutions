#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void reverse(vector <int>&a){
  int s=0;
  int e= a.size()-1;

  while(s<e){
    swap(a[s],a[e]);
    s++,e--;
  }
  
}
int main(){

vector <int> arr1={1,2,3,4,5,6};
vector <int> arr2={6};

vector <int> arr;

int i=arr1.size()-1;
int j=arr2.size()-1;
int carry=0;

while(i>=0 && j>=0){
  int val1= arr1[i];
  int val2= arr2[j];
  int sum = val1+val2+carry;
  carry = sum/10;
  sum = sum % 10;
  arr.push_back(sum);
  i--,j--;
}

while(i>=0){
  int val1= arr1[i];
  int sum = val1+carry;
  carry = sum/10;
  sum = sum % 10;
  arr.push_back(sum);
  i--;
}

 while(j>=0){
  int val2= arr2[i];
  int sum = val2+carry;
  carry = sum/10;
  sum = sum % 10;
  arr.push_back(sum);
  j--; 
 }

while(carry!=0){
  int sum= carry;
  carry = sum/10;
  sum = sum % 10;
  arr.push_back(sum);
}
 
reverse(arr);


for(int i:arr){     
  cout<<i<<" ";
  i++;              
}                   

  return 0;
}

