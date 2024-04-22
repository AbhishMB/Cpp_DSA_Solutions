#include<iostream>
#include<vector>
using namespace std;

int MaximumOnesRows(vector<vector<int>>&A)
    {
        int MaxOnes=INT8_MIN;
        int MaxOnesRows=-1;
        int colmns=A[0].size();

        for(int i=0; i<A.size();i++)
        {
            for(int j=0;j<A[i].size();j++)
            {
                if(A[i][j]==1)
                {
                    int NumberOfOnes=colmns-j;
                    if(NumberOfOnes>MaxOnes)
                    {
                      MaxOnes=NumberOfOnes;
                      MaxOnesRows=i;
                    }
                }
            }
        }
        return MaxOnesRows;
    }

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int> >A (n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }

    int result=MaximumOnesRows(A);
    cout<<result<<endl;

    return 0;
}

