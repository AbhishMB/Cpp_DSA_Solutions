
#include <iostream>

using namespace std;

int main(){
  
  cout<<"Enter the total amount to write in the denominations of 100,50,20,1;"<<endl;
  int amt;
  cin>>amt;

  int n,m;
  cout<<"Enter the denomination to know its number to make up the amount:"<<endl;
  cin>>n;
  
  switch(n){

    case 100: 
      m= amt/n;
      cout<<"The denomination of "<<n<<" required are:"<<m<<endl;
      break;
    case 50:
      m = (amt-(amt/100))/n;
      cout <<"The denomination of "<<n<<" required are:"<<m<<endl;
      break;
    case 20:
      m= (amt-((amt/100)+(amt/50)))/n;
      cout<<"The denomination of "<<n<<" required are:"<<m<<endl;
      break;
    case 1:
      m= (amt-((amt/100)+(amt/50)+(amt/20)))/n;
      cout<<"The denomination of "<<n<<" required are:"<<m<<endl;
      break;
    default:
        cout<<"Invalid denomination"<<endl;
    
  }




  return 0;
}
