#include<iostream>
using namespace std;

int BinarySearch1(int a[],int n,int key,int low,int high,int f)
{
  int mid=(low+high)/2;

  if(low>high)
  {
    return f;
  }

       if(a[mid]==key)
        {
            //return mid;
            f=mid;
            high=mid-1;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    BinarySearch1(a,n,key,low,high,f);
}

int BinarySearch2(int a[],int n,int key,int low,int high,int s)
{
  int mid=(low+high)/2;

  if(low>high)
  {
    return s;
  }

       if(a[mid]==key)
        {
           // return mid;
           s=mid;
           low=mid+1;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    BinarySearch2(a,n,key,low,high,s);
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

  cout<<"enter the key element to be serached\n";
  cin>>key; 
 int low=0,high=n-1;
 int f=-1,s=-1;
 int First= BinarySearch1(a,n,key,low,high,f);
 cout<<"First "<<First<<endl;

 int Second= BinarySearch2(a,n,key,low,high,s);
 cout<<"Second "<<Second;
 return 0;
}