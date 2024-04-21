#include<iostream>
using namespace std;

int mian(){
 int day;
 cin>>day;
 switch(day){
  case 1:
  cout<<"monday"<<endl;
  break;
  case 2:
  cout<<"tuesday"<<endl;
  break;
  case 3:
  cout<<"wed"<<endl;
  break;
  default:
  cout<<"default case"<<endl;
 }
 return 0;
}