//mines simple and easy
#include<iostream>
#include<vector>
using namespace std;

void MOST1(vector<vector<int> >&Q,int n,int m)
{
    int flag=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0 ; j<n;j++)
        {
            if(Q[j][i]==1)
            {
                cout<<"Moast number of one found in "<<j<<" row";
                cout<<"\nIt has "<<m-i<<" ones";
                flag=1;
                break;
                
            }

        }
        if(flag==1)
        {
            break;
        }
        
        
    }
}

int main()
{
    int n,m;
    cout<<"Enter rows and colom :";
    cin>>n>>m;

    vector<vector<int> > Q(n,vector<int> (m)); 

    cout<<"enter element here\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>Q[i][j];
        }
    }

MOST1(Q,n,m);

  return 0;
}
 

//MAM'S LECTURER CODE
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

