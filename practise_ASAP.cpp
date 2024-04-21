#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int n;
  cout<<"Enter the size of array"<<endl;

  cin>>n;
  int t;
  cout<<"Enter the target sum"<<endl;
  cin>>t;
  int arr[n];
  cout<<"Enter the elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  for(int i=0;i<n;i++){
    for(int j=i;j<n-i;j++){
      if(arr[i]+arr[j]==t){
          cout<<"["<<i<<","<<j<<"]"<<endl;
      }
    }
  }
  return 0;
}
