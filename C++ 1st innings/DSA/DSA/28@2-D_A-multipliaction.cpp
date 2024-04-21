#include<iostream>
using namespace std;

  int MULTIPLICATION(int a[20][20],int b[20][20],int c[20][20],int r1,int c1,int r2,int c2)
{
    int i,j,k;
  for( i=0;i<r1;i++)
  {
    for ( j = 0; j < c2; j++)
    {
      c[i][j]=0;
     for ( k = 0; k< r2; k++)
     {
        c[i][j]+=a[i][k]*b[k][j];
     }
     
    }
    
  }

  for(int i=0;i<r1;i++)
  {
    for (int  j = 0; j < c2; j++)
    {
        cout<<c[i][j] ;
     
     
    }
    cout<<"\n";
  }

}


int main()
{
    int r1,c1,r2,c2,a[20][20],b[20][20],c[20][20];

    cout<<"enter r1 and c1 :\n";
    cin>>r1>>c1;

     cout<<"enter r2  c2 :\n";
    cin>>r2>>c2;

    if(c1!=r2)
    {
        cout<<"array multiplication is not possible";
        exit(0);
    }
    
    cout<<"enter the elements of a :\n";
    for (int i = 0; i < r1; i++)
    {
      for (int j = 0; j< c1; j++)
      {
        cin>>a[i][j];
      }
      
    }

    cout<<"enter the elements of b :\n";
    for (int i = 0; i < r2; i++)
    {
      for (int j = 0; i < c2; j++)
      {
        cin>>b[i][j];
      }
      
    }
    
  cout<<MULTIPLICATION(a,b,c,r1,c1,r2,c2);
 return 0;

}
  