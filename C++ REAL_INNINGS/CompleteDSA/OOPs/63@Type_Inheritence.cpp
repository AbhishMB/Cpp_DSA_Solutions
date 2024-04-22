#include<iostream>
using namespace std;

class A
{
    public:
    int n=1;
    char e='z';
};

class B : public A
{
   public:
   int m=9;
   char f='k';
};

class C : public A
{
   public:
   int x=8;
   char g='l'; 
};

int main()
{
    A a;
    B b;
    C c;

    cout<<c.n;
    return 0;
}