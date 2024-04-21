#include<iostream>
using namespace std;

void ALTSWAP(int a[],int n)
{
    int temp;
   for(int i=0;i<n-1;i+=2) //for(i=0;i<n;i+=2)
   if(i<n)                 //  if(i+i<n)
    {                      //{
     temp=a[i];            // swap(a[i],a[i+1]);
     a[i]=a[i+1];          //}
     a[i+1]=temp;
       
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
    ALTSWAP(a,n);

}