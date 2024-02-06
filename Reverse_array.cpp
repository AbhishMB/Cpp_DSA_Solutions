#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
  


void swap(int &m, int &k){
  int temp = m;
  m=k;
  k=temp;
}
int main(){


 vector<int> arr;
 arr.push_back(1);
 arr.push_back(2);
 arr.push_back(3);
 arr.push_back(4);
 arr.push_back(5);
 arr.push_back(6);
 arr.push_back(7);
 arr.push_back(8);

  int M=3;
  auto i=find(arr.begin(),arr.end(),M);
  int idx= i-arr.begin()+1;
  cout<<idx<<endl;
  int n= arr.size()-1;
  cout<<n<<endl;

  while(idx<=n){
    swap(arr[idx],arr[n]);
    idx++;
    n--;
  }

  int s=arr.size()-1;

  for (int i=0;i<=s;i++){
    cout<<arr[i]<<" ";
  }
return 0;
}
