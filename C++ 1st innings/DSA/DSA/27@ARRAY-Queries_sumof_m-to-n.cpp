#include<iostream>
#include<vector>
using namespace std;

int QUERIES_SUM0F_Y_TO_Z(vector<int>&v,int n)
{
    int y,z,q,sum=0;
    cin>>q;
    while(q--)
    {
    cin>>y>>z;
    for (int i = y-1; i<=z-1; i++)
    {
       sum+=v[i]; 
    }
     cout<<sum<<" is the sum of the "<<q<<" queri";
     sum=0; 
    }
}

int main()
{
    int n;
    cout<<"enter number of element : ";
    cin>>n;

    vector<int>v;

    for(int i=0;i<n;i++)
    {
      int ele;
      cin>>ele;
      v.push_back(ele);
    }

    cout<<QUERIES_SUM0F_Y_TO_Z(v,n);

  return 0;
}