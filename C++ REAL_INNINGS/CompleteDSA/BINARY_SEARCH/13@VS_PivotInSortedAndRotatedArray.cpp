#include<iostream>
using namespace std;

int PivotInSortAndRoatedArray(int a[],int n)
{
   /* int i=0;
    while(a[i]<a[i+1])
    {
     i++;
    }
    return i+1; */
    int s=0, e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(a[mid]>a[mid-1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
         mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
  int a[25],i,n;
  cout<<"Enter the number of element\n";
  cin>>n;

  cout<<"Enter the elements here\n";
  for(i=0; i<n; i++)
  {
    cin>>a[i];
  }
 int ans= PivotInSortAndRoatedArray(a, n);
 cout<<ans;
}