#include <iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the numbers of rows:"<<endl;
  cin>>n;

  int i=1;
  
  while(i<=n){
    int j=n;
    while(j>=i){
      cout<<" ";
      j--;

    }
    int k=1;
    while(k<=i){
      cout<<k;
      k++;
    }
    int m=i-1;
    while(m>0){
        cout<<m;
        m--;
      }
      

    
    cout<<endl;
    i=i+1;
  } 
  return 0;
}
