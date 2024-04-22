// just tried for particular one (not crct)
#include<iostream>
#include<vector>
using namespace std;

void RotateBy90degree(vector<vector<int>>&M)
{
  int n=M.size()-1;
  for(int i=0; i< M.size(); i++)
  {
    
    for(int j=0;j<M[i].size();j++)
    {
        if(j==0)
        {
            M[0][n]=M[i][j];
        }
        if(j==1)
        {
            M[1][n]=M[i][j];
        }
        if(j==2)
        {
            M[2][n]=M[i][j];
        }
    }
    n--;
  }
  for(int i=0;i<M.size();i++)
    {
        for (int j = 0; j < M[i].size(); j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int n,m;
    cout<<"entter a rows and colmns of a matrix ";
    cin>>n>>m;

    vector<vector<int>>M(n,vector<int>(m));

    for(int i=0;i<M.size();i++)
    {
        for (int j = 0; j < M[i].size(); j++)
        {
            cin>>M[i][j];
        }
        
    }

    RotateBy90degree(M);
}





//MAMS CLS CODE
#include<iostream>
#include<vector>
using namespace std;

void RotateBy90degree(vector<vector<int>>&M)
{
  int n=M.size();
  //transpose
  for(int i=0;i<M.size();i++)
    {
        for (int j = 0; j<i; j++)
        {
            swap(M[i][j],M[j][i]);
        }
        
    }
    //reverse ever row
    /*for(int i=0;i<n; i++)
    {
         reverse(M[i].begin(),M[i].end()); //inbuit fun not working
    }*/
     for(int i=0;i<M.size();i++)
       {
        for (int j = 0; j<n/2; j++)
        {
            swap(M[i][j],M[i][n-1]);
            
        }
        
    }

}

int main()
{
    int n;
    cout<<"entter a rows and colmns of a matrix ";
    cin>>n;

    vector<vector<int>>M(n,vector<int>(n));

    for(int i=0;i<M.size();i++)
    {
        for (int j = 0; j < M[i].size(); j++)
        {
            cin>>M[i][j];
        }
        
    }

    RotateBy90degree(M);


    for(int i=0;i<M.size();i++)
    {
        for (int j = 0; j < M[i].size(); j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }


    return 0;
}