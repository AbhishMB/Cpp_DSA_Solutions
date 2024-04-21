#include <iostream>
#include <math.h>
using namespace std;

int main(){
  
  cout<<"Enter the decimal to convert to binary:"<<endl;
  int m;
  cin>>m;
  int bit,answer=0,i=0;
  while(m!=0){
    bit=m & 1;
    m>>=1;
    answer=(bit*pow(10,i))+answer;
    i++;

  }
  cout<<answer<<endl;



  return 0;

}
