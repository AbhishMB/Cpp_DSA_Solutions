#include<iostream>
using namespace std;

int MaxAndMinEle(int a[] , int n)
{
  int maxi=INT8_MIN;
  int mini=INT8_MAX;

  for(int i=0 ;i<n ; i++)
  {
   /* if(a[i]>=max)
    {
       max= a[i];   
    }
    if(a[i]<=min)
    {
       min=a[i];
    } */

    //maxi = max(maxi,a[i]);
    //mini = min(mini,a[i]);

    //return make_pair(mini,maxi);

   
  }
   cout<<maxi<<"\n";
    cout<<mini;
}
int main()
{
   int a[25],n;
   cout<<"enter the number of the elements\n";
   cin>>n;

   for(int i=0 ; i<n ; i++)
   {
    cin>>a[i];
   }

   MaxAndMinEle(a,n);
   
    return 0;
}