#include<iostream>
#include<vector>
using namespace std;

void CreateSpiralMatrix(vector<vector<int>>&spiralmat,int n)
{
    int top=0;
  int bot=n-1;
  int left=0;
  int right=n-1;

  int direc=0;
  int ele=1;

  while(ele<=(n*n))
  {
    if(direc==0)
    {
        for(int col=left; col<=right; col++)
        {

            spiralmat[top][col]=ele;
            ele++;
            
        }
        top++;
        direc++;
    }
    if(direc==1)
    {
      for(int row=top; row<=bot;row++)
      {
        spiralmat[row][right]=ele;
        ele++;
      }
      right--;
      direc++;
    }
    if(direc==2)
    {
        for(int col=right;col>=left; col--)
        {
            spiralmat[bot][col]=ele;
            ele++;
        }
        bot--;
        direc++;
    }
    if(direc==3)
    {
        for(int row=bot;row>=top;row--)
        {
            spiralmat[row][left]=ele;
            ele++;
        }
        left++;
        direc=0;
    }
    
  }    
}
int main()
{
    int n;
    cin>>n;

    vector<vector<int>> spiralmat(n,vector<int>(n));

    CreateSpiralMatrix(spiralmat,n);

    for(int i=0;i<spiralmat.size();i++)
    {
        for (int j = 0; j <spiralmat[i].size(); j++)
        {
            cout<<spiralmat[i][j]<<" ";
        }
       cout<<"\n"; 
    }


    return 0;
}