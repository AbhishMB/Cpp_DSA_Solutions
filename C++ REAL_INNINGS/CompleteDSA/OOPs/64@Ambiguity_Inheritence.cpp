#include<iostream>
using namespace std;

class A
{
    public:
    int n=1;
    char e='z';
};

class B 
{
   public:
   int n=9;
   char e='k';
};

class C : public A , public B
{
   public:
   int x=8;
   char g='l'; 
};

int main()
{
    C c;
    cout<<c.B ::n;
    return 0;
}