#include<iostream>
using namespace std;

int main()
{
    int x{3};
    char y{'W'};

    const *int i = &x;
    const char *j = &y;

    x = 9;
    y='p';

    

    cout<<endl<<*i<<"   "<<*j<<endl;
}