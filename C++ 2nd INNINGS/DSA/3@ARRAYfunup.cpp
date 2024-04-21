// FUNCTION UPDATE EFFECT
#include<iostream>
using namespace std;

void update(int arr[],int n)
{
    arr[0]=120;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";

    }

}


int main()
{
    int arr[5]={ 2,4,6,8,10};
    cout<<"after update"<<endl;

    update(arr,5);
    
    cout<<endl;
    cout<<"arr ;";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";

    }
    
}