#include<iostream>
using namespace std;

void TRANSPOSE(int a[20][20],int r,int c)
{
    int i,j;
  for(int i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
        a[i][j]=a[j][i];
    }
  }

for(int i=0;i<r;i++)
  {
    for (int  j = 0; j < c; j++)
    {
        cout<<a[i][j] ;
     
     
    }
    cout<<"\n";
  }

}

int main()
{
    int r,c,a[20][20];

    cout<<"enter r and c :\n";
    cin>>r>>c;


    cout<<"enter the elements of a :\n";
    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j< c; j++)
      {
        cin>>a[i][j];
      }
      
    }

  TRANSPOSE(a,r,c);
 return 0;

}
  