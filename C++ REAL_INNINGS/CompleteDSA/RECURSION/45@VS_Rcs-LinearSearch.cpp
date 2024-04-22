#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int n,int key)
{
  //base codn
  if(n==0)
  {
    return 0;
  }

  if( arr[0]==key)
  {
    return 1;
  }
  else{
    int remainpart=LinearSearch(arr+1,n-1,key);
    return remainpart;
  }

}

int main()
{
  int i, n;
    cin>>n;
    int arr[25];
    for (i=0; i<n; i++)
    {
       cin>>arr[i];
    }

    int key; 
    cout<<"Enter the key"<<endl;
    cin>>key;

    bool ans= LinearSearch(arr,n,key);

    if(ans)
    {
        cout<<"key is present ";
    }
    else
    {
        cout<<"key is not present ";
    }

    return 0;
  
}