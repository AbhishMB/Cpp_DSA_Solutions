/* FIND THE SUM OF TERMS LIKE ---
 * 1 + 1/2 + 1/4 + 1/8 + ......... + 1/POW(2,K) FOR K TERMS: USING RECURSION ONLY    
 *
*/


#include <iostream>
#include<cmath>

using namespace std;

float gp(int n ){
  if(n==0){
    return 1;
  }  else{
    return gp(n-1)+1/(pow(2,n)) ;
  }
}



int main(){
  int k;
  cout<<"Enter the term:"<<endl;
  cin>>k;
  float m=gp(k);
  cout<<"The sum of k terms is: "<<m;


  return 0;
}
