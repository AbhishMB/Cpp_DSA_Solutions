#include<iostream>
using namespace std;
#include<vector>

void MatToSpiral(vector<vector<int>>&mat,int rows,int colms)
{
  int top=0;
  int bot=rows-1;
  int left=0;
  int right=colms-1;

  int direc=0;
  int count=1;

  while(count<=rows*colms)//instead of count
                          //(left<=right && top<=bot)
  {
    if(direc==0)
    {
        for(int col=left; col<=right; col++)
        {
            cout<<mat[top][col]<<" ";
            count++;
        }
        top++;
        direc++;
    }
    if(direc==1)
    {
      for(int row=top; row<=bot;row++)
      {
        cout<<mat[row][right]<<" ";
        count++;
      }
      right--;
      direc++;
    }
    if(direc==2)
    {
        for(int col=right;col>=left; col--)
        {
            cout<<mat[bot][col]<<" ";
            count++;
        }
        bot--;
        direc++;
    }
    if(direc==3)
    {
        for(int row=bot;row>=top;row--)
        {
            cout<<mat[row][left]<<" ";
            count++;
        }
        left++;
        direc=0;
    }
    //intrad of direc in all condn
    //direc=(direc+1%4)
  }    
}

int main()
{
    int rows,colms;
    cin>>rows>>colms;

    vector<vector<int>> mat(rows,vector<int>(colms));

    for(int i=0;i<mat.size();i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cin>>mat[i][j];
        }
        
    }

    MatToSpiral(mat,rows,colms);
    return 0;
}