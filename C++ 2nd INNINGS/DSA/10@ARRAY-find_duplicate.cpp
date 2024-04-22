#include<iostream>
using namespace std;

int FIND_DUPLICATE(int a[], int n)
{
  int ans=0;
  for(int i=0;i<n;i++)
  {
    ans=ans^i;
  }
  for(int i=0;i<n;i++)
  {
    ans=ans^a[i];
  }
  return ans;
}
int main()
{
    int n,a[100];

    cout<<"enter number of element :";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;

    cout<<"array a :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"one duplicate array in the list is :";
    cout<<FIND_DUPLICATE(a,n);
    return 0;
}