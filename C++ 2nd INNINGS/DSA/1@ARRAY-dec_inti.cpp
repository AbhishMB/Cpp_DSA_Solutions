#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
    cout<<"printing the array :";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"printing is done";
}


int main()
{
    int a1[5];
    cout<<"value at index 5 "<<a1[4]<<endl;
    cout<<"value at index 11 "<<a1[11]<<endl;
    //gives some garbage value
    cout<<endl;
    cout<<endl;

    int a2[15]={1,2,3,4,5};
    cout<<"value at 4 index "<<a2[4]<<endl;
    cout<<"value at 15 index "<<a2[13]<<endl;
    //finate gives zeoros to unmentioned element 
    cout<<endl;
    cout<<endl;

    //printing the array
    int a3[10]={2,7,3};
    cout<<"printing the array :";
    for(int i=0;i<10;i++)
    {
        cout<<a3[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
     
    //array containing {0} gives all value zero but not {1}
    int a4[10]={0};
    cout<<"printing the array :";
    for(int i=0;i<10;i++)
    {
        cout<<a4[i]<<" ";
    }
    cout<<endl;
    cout<<endl;

    //printing using function
    int a5[10]={2,7};
    printarray(a5,10);



    return 0;
}