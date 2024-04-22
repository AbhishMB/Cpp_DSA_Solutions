#include<iostream>
using namespace std;

void print( int arr[],int key,int st,int end)
{
    int mid =(st+end)/2;

    if(st>end)
    {
        cout<<"key not found"<<endl;
        return;
    }

    if(arr[mid]==key)
    {
       cout<<"key found"<<endl;
        return; 
    }
    else if(arr[mid]<key)
    {
        st=mid+1;
    }
    else{
        end=mid-1;
    }

    print(arr,key,st,end);
    
}

int main()
{
    int arr[8]={11,22,33,44,55,66,77,88};
    int n=8;
    int key;
    cin>>key;
    int st=0,end=n-1;

    print(arr,key,st,end);
    return 0;
}
