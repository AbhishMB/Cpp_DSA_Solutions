#include<iostream>
using namespace std;

int ALL_DUPLICATE(int a[], int n)
{
  int tem=0,ans=0;
  for(int i=0; i<n;i++)
  {
    for( int j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            cout<<a[i];
            cout<<endl;
        }
    }
  }
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

    cout<<" duplicate elements in the array list is :";
    ALL_DUPLICATE(a,n);
    return 0;
}