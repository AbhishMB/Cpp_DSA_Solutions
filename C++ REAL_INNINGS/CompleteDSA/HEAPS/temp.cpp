#include<iostream>
using namespace std;

int findSetBit(int num){
  int cnt=0;
  while(num>0){
    if(num & 1){
      cnt++;
    }
    num = num>>1;
  }
  return cnt;
}

int main(){
  cout<<"hi"<<endl;
  //cout<<findSetBit(9)<<endl;
   int num =3;
   cout<<(!4);
}