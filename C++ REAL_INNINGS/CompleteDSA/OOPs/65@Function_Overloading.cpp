#include<iostream>
using namespace std;

class A
{
  public :  
  void sayHello()
  {
    cout<<"Hello Love Babbar"<<endl;;
  }
 
  int sayHello(string name,int n)
  {
    cout<<"Hello Love Babbar"<<endl;
    return n;
  }

  void sayHello(string name)
  {
    cout<<"Hello Love "<<name<<endl;
  }
};
 int main()
 {
    A obj;
    obj.sayHello();
    return 0;
 }