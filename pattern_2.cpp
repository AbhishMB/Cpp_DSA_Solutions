#include <iostream>
using namespace std;

int main(){
  int n;
  cout<< "Enter the number of rows:"<<endl;
  cin>>n;

  int i=0;
  while(i<n){

    int j=1;
    while(j<=n-i){
      cout<<j;
      j++;
    while(j>n-i && j<=n){
      cout<<"*";
      j++;

    }
    }
    
    int s=1;
    while(s<=i){
      cout<<"*";
      s++;
    }
    int k=n-i;
    while(k>0){
      cout<<k;
      k--;
    }

    cout<<endl;
    i++;
    
    
  }
  return 0;

}
