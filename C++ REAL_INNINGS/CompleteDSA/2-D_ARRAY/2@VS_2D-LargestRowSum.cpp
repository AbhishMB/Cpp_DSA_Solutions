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

    int max=-1,LarRow=-1;
    for(int i=0;i<n; i++)
    {
        int sum=0;
        for(int j=0; j<m; j++)
        {
          sum+=arr[i][j];
        }
        if(sum>max)
        {
            max=sum;
            LarRow=i+1;
        }
    }
    cout<<"larest sum row is "<<LarRow;
    return 0;;
}