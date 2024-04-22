#include<iostream>
using namespace std;

void SWAP(int a[],int n)
{
    int start=0;
    int end=n-1;
    int temp;
     while(start<=end){
         temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
     }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
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

    cout<<"after swaping :";
    SWAP(a,n);

}