#include<iostream>
#include<vector>
using namespace std;

void RectangleSumIn2D(vector<vector<int>>&M,int l1, int r1,int l2, int r2)
{
    int sum=0;
    for(int i=l1-1;i<=l2-1;i++)
    {
        for(int j=r1-1; j<=r2-1; j++)
        {
            sum+=M[i][j];
        }
    }
    cout<<"sum is "<<sum;
}

int main()
{
    int n,m,l1,r1,l2,r2;
    cout<<"Enter rows and colms :\n";
    cin>>n>>m;

    vector<vector<int>>M(n,vector<int>(m));

    for(int i=0;i<M.size();i++)
    {
        for (int j = 0; j < M[i].size(); j++)
        {
            cin>>M[i][j];
        }
        
    }

    cout<<" enter the boundry here :\n";
    cout<<" first cordinate \n";
    cin>>l1>>r1;
    cout<<" second cordinate \n";
    cin>>l2>>r2;

    RectangleSumIn2D(M,l1,r1,l2,r2);
    return 0;
}