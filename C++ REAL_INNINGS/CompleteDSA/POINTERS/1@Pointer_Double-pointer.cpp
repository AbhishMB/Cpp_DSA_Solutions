#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<&i<<endl;
    cout<<p<<endl;
    //cout<<&p<<endl;
    cout<<*p2<<endl; //return the value of adrees in the p

    cout<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
     
}