#include<iostream>
using namespace std;

void SwapAlternateElement(int a[],int n)
{
  for(int i=0; i<n && (i+1)<n; i+=2)
  {
    swap(a[i],a[i+1]);
  }
}

void Print(int a[],int n)
{
  for(int i=0;i<n; i++)
  {
    cout<<a[i]<<" ";
  }
}

int main()
{
  int a[25],i,n;
  cout<<"Enter the number of element\n";
  cin>>n;

  cout<<"Enter the elements here\n";
  for(i=0; i<n; i++)
  {
    cin>>a[i];
  }
  
  SwapAlternateElement(a,n);
  Print(a,n);
  return 0;
}
