#include<iostream>
using namespace std;

void Print(int *n)
{
  cout<<"N value is :"<<*n<<endl; 
}

int main()
{
    int n=011;
    Print( &n);
    
}