#include<iostream>
#include<vector>
using namespace std;

vector<int> ARRAY_INTERSECTION(vector<int> &v1,int m,vector<int> &v2,int n)
{ 
  vector<int>ans;
  for (int i = 0; i < m; i++)
  {
    for(int j=0;j<n;j++)
    {
      if(v1[i]==v2[j])
      {
        ans.push_back(v1[i]);
        v2[j]==INT8_MIN;
        break;
      }
    }
  }
  cout<<"\nintersected ele are :";
  for(int i:ans)
  {
    cout<<i<<" ";
  }
}
int main()
{
  vector<int>v1,v2;
  int m,n;
  cout<<"enter the value of m & n:\n";
  cin>>m>>n;
  cout<<"\nenter the element in a :";
  for(int i=0;i<m;i++)
  {
    int ele;
    cin>>ele;
    v1.push_back(ele);
  }
  
  cout<<" element in a are :";
  for(int i=0;i<m;i++)
  {
    cout<<v1[i]<<" ";
    
  }

  cout<<"\nenter the element in b :";
  for(int i=0;i<n;i++)
  {
    int ele;
    cin>>ele;
    v2.push_back(ele);
  }

  cout<<" element in b are :";
  for(int i=0;i<n;i++)
  {
    cout<<v2[i]<<" ";
    
  }
  ARRAY_INTERSECTION(v1,m,v2,n);
}