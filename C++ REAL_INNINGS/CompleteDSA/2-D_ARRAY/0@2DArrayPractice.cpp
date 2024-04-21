#include<iostream>
using namespace std;

int main()
{
    int arr[25][25],n,m;
    cout<<"Enter the row and column limit\n";
    cin>>n>>m;

    cout<<"Enter the elements here\n";
    for(int i=0;i<n; i++)
    {
        int sum=0;
        for(int j=0; j<m; j++)
        {
          cin>>arr[i][j];
        }
    }


    for(int i=0;i<n; i++)
    {
        int sum=0;
        for(int j=0; j<m; j++)
        {
          sum+=arr[i][j];
        }
        cout<<"sum of "<<i+1<<"row is "<<sum<<endl;
    }
    return 0;
}