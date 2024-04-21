#include<iostream>
using namespace std;

int CHECK_UNIQUE(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j]){
               a[j]=-1;
               count++;
            }
        
        }
        if(count>0){
            a[i]=-1;
            count=0;
        }
    }
 
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            flag++;
        }
    }
    
    if(flag==1){
        cout<<"true";
    }
    else{
        cout<<"false";
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

    cout<<"unique element in the given array :";
    CHECK_UNIQUE(a,n);
}