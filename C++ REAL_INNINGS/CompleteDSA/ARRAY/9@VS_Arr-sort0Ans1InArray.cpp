#include<iostream>
using namespace std;

void Sort0And1(int a[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        if(a[start]==0 ){
            start++;
            
        }
        else
        {
            if(a[end]==1){
                end--;
            }
            else{
                //swap(a[start],a[end]);
                int temp=a[start];
                a[start]=a[end];
                a[end]=temp;
                start++;
                end--;
            }
        }
    }
}

void Print(int a[],int n)
{
  for(int i=0;i<n; i++)
  {
    cout<<a[i]<<" ";
  }
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
  Sort0And1(a,n);
  Print(a,n);
  return 0;
}