#include<iostream>
using namespace std;

int PeakElement( int a[],int n,int s,int e)
{
    int mid= s+(e-s)/2;
    if(s>=e)
    {
      return s;
    }

    if(a[mid]<a[mid+1])
    {
      s=mid+1;
    }

    else{
      e=mid;
    }
    PeakElement(a,n,s,e);
}
int main()
{
  int a[25],i,n,key;
  cout<<"Enter the number of element\n";
  cin>>n;

  cout<<"Enter the elements here\n";
  for(i=0; i<n; i++)
  {
    cin>>a[i];
  }  
 int s=0,e=n-1;
 int index= PeakElement(a,n,s,e);
 cout<<index;
 return 0;
}