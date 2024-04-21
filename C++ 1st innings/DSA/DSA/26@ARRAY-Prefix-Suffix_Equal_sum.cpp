#include<iostream>
#include<vector>
using namespace std;

/*void */bool PREFIX_SUFIX_EQUALSUM(vector<int>&v,int n)
{
    int Tsum=0;
    for (int i = 0; i < n; i++)
    {
        Tsum+=v[i];
    }

     int prf_sum=0,suf_sum,flag=0;
    for (int i = 0; i < n; i++)
    {
        prf_sum+=v[i];
        suf_sum=Tsum-prf_sum;

        if(prf_sum==suf_sum){
           return 1;
           //printf("yes we can");
            //flag=1;
            //break;
        }
    }
    return 0;
    //if(flag==0)
    //{
      //  printf("no we can't");
    //}
    
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

    cout<<PREFIX_SUFIX_EQUALSUM(v,n); // If it is void ..no need of cout..otherwise its must

  return 0;
}