#include<iostream>
using namespace std;


int GETMAX (int a[],int n)
{
    int max= INT8_MIN;
    for(int i=0;i<n;i++)
    {
     if(a[i]>max)
     {
        max=a[i];
     }
    }
    return max;
}  


int GETMIm (int a[],int n)
{
    int mini= INT8_MAX;
    for(int i=0;i<n;i++)
    {
     
     
        mini=min(mini,a[i]); //free def fun use 
    }
    return mini;
}  


int main()
{
    int n,a[100];
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];  
    }
    cout<<"a :";
    for(int i=0;i<n;i++)
    {
     cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<GETMAX(a,n)<<endl;
    cout<<GETMIm;
    return 0;
}


/*
    * never write cin>>size
                  int a[size] //use a[anythung def num]
   
   * free def fun for max and min is
       maxi= max(maxi,a[i]) 
                           instead of
                            if(a[i]<min)
                            {
                              min=a[i];
                            }


*/              