#include<iostream>
using namespace std;

bool IsSorted(int arr[], int n)
{
    //base case
    if(n==0 || n==1)
    {
        return 1;
    }

    if(arr[0]>arr[1])
    {
        return 0;
    }
    else{
        int res=IsSorted(arr+1,n-1);
        return res;
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

    int ans= IsSorted(arr,n);

    if(ans)
    {
        cout<<"array is sorted ";
    }
    else
    {
        cout<<"array is not sorted ";
    }

    return 0;

}