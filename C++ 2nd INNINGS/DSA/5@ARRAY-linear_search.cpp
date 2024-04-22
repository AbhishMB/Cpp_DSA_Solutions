//                                LINEAR SEARCH IN ARRAY

#include<iostream>
using namespace std;
int main()
{
    int n,a[100];

    cout<<"enter number of element :";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    cout<<"array a :";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;
    int key,ans=-1;
    cout<<"enter key :";
    cin>>key;
    cout<<endl;

    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            ans=i;
            cout<<"the key is present at index :";
            cout<<ans;
            cout<<endl;
        }
    }
    
}