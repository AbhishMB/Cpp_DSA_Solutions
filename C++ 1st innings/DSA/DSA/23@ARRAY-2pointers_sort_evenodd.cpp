#include<iostream>
#include<vector>
using namespace std;

void SORT_E_AND_OD(vector<int>&v,int  n)
{
    int start=0;
    int end=n-1;
   while(start<end)
   {
     if(v[start]%2==0)
     {
        if(v[end]%2==0)
        {
            start++;
            end--;
        }
        else{
            start++;
        }
     }
    else{
        if(v[end]%2==0){
           int temp;
           temp=v[start];
           v[start]=v[end];
           v[end]=temp;
        }
        else{
            end--;
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

 SORT_E_AND_OD(v,n);

   for(int ele:v)
    {
        cout<<ele<<" ";
    }
    
    return 0;
}