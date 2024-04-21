#include<iostream>
#include<vector>
using namespace std;

void PREFIXorRUNNING_SUM(vector<int>&v,int n)
{
    int ini=0;
  for(int i=0;i<n;i++)
  {
    v[i]=ini+v[i];
    ini=v[i];
  }
  for(int ele:v)
  {
    cout<<ele<<" ";
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

    PREFIXorRUNNING_SUM(v,n);

  return 0;
}