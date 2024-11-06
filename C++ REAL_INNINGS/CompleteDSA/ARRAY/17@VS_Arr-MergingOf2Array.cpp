#include<iostream>
using namespace std;

void Merge(int a1[],int a2[],int a3[],int n, int m)
{
    int i=0,j=0,k=0,a;

    while(i<n && j<m)
    {
        if(a1[i]<a2[j])
        {
            a3[k]=a1[i];
            i++;
            k++;
        }
        else{
            a3[k]=a2[j];
            j++;
            k++;
        }
    }
    while(i<n)
    {
    
        a3[k]=a1[i];
        i++;
        k++;
    }
    while(j<m)
    {
    
      
        a3[k]=a2[j];
        j++;
        k++;
    }

    for(k=0; k<m+n; k++)
    {
        cout<<a3[k]<<" ";
    }
}

int main()
{
    int i,j,a1[25],a2[25],a3[25],n,m;
    cout<<"Enter the n and m-"<<endl;
    cin>>n>>m;

    for(i=0; i<n; i++)
    {
        cin>>a1[i];
    }

    for(i=0; i<m; i++)
    {
        cin>>a2[i];
    }

    Merge(a1,a2,a3,n,m);
    return 0;
}