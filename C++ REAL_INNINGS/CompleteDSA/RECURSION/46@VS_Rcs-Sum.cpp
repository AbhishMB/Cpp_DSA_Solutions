#include<iostream>
using namespace std;
/*
mine code
int sum(int arr[],int n,int s)
{
  

  //base case
    if(n==0)
    {
        return s;
    }

    s+=arr[0];
    sum(arr+=1,n-1,s);


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
    int s=0;
    int ans= sum(arr,n,s);
    cout<<ans;

    return 0;

}
*/


int sum(int arr[],int n)
{
    if(n==0)
    {
      return 0;
    }
    if(n==1)
    {
      return arr[0];  
    }
    int remainpart= sum(arr+1,n-1);
    int sum = arr[0]+ remainpart;
    return sum;
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
    int ans= sum(arr,n);
    cout<<ans;

    return 0;

}