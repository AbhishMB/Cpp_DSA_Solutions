#include<iostream>
#include<vector>
using namespace std;

void SORT_0_AND_1(vector<int>&v, int n)
{
   /* int zero_count=0;

    for(int ele:v)
    {
        if(ele==0)
        {
            zero_count++;
        }
    }
   for(int i=0;i<v.size();i++)
   {
    if(i<zero_count)
    {
        v[i]=0;
    }
    else{
        v[i]=1;
    }
   }
   */
  
  int start=0;
  int end=n-1;

  while(start<end)
  {
  if(v[start]==0)
  {
    if(v[end]==0)
    {
        start++;
    }
    else{
        start++;
        end--;
    }
  }
    if(v[start]==1)
  {
    if(v[end]==1)
    {
        end--;
    }
    else{
        int temp;
        temp=v[start];
        v[start]=v[end];
        v[end]=temp;

    }
  }
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

 SORT_0_AND_1(v,n);

   for(int ele:v)
    {
        cout<<ele<<" ";
    }
    
    return 0;
}