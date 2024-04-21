#include<iostream>
using namespace std;

int findunique(int a[],int n)
{
    int ans=0;
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

    cout<<"The unique element in the array is :";
    cout<<findunique(a,n);
}