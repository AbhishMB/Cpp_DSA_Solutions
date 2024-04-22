#include<iostream>
using namespace std;

/*int BinarySearch(int a[],int n,int key)
{
    int i, j,low,mid,high;

    low=0;
    high=n-1;
    mid=(low+high)/2;


    while(low<=high)
    {
        

        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=(low+high)/2;

    }
    return -1;

}*/


int BinarySearch(int a[],int n,int key,int low,int high)
{
  int mid=(low+high)/2;

  if(low>high)
  {
    return -1;
  }

       if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    BinarySearch(a,n,key,low,high);
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
 int index= BinarySearch(a,n,key,low,high);
 cout<<index;
 return 0;
}