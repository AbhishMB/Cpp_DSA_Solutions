#include<iostream>
using namespace std;

void Print(char *sp)
   {
     sp+=2;
     cout<<*sp<<endl;
   }

void update(int *num)
{
  cout<<*num+1;
}   

void updates(int *p)
{
  p=p+1;
}   

int main()
{
    /*
    int num=6;

    int *ptr=&num;

   // cout<<&num<<endl;
    cout<<ptr<<endl; 
   // cout<<&ptr<<endl;
    //cout<<*ptr<<endl;
    //cout<<num<<endl;
    ptr++;
    cout<<ptr; 
    */
   int arr[10]={0,1,2,3,4,5,6,7,8,9};
   
   cout<<*(arr+3)<<endl;
   int  *ptr=arr;
   ptr+=3;
   cout<<*ptr<<endl;

   //int *ptr=arr;
   // cout<<"adress of "<<&arr<<endl;
   // cout<<"adress of "<<&arr[0]<<endl;
   //cout<<(&arr[0])<<endl;
   //cout<<arr;
   //ptr+=2;
   //*ptr=16;
   //cout<<arr[2];
   //cout<<(&arr[0])<<endl;
   //cout<<ptr;

   //cout<<"size of array "<<sizeof(arr)<<endl;
   //cout<<"size of array "<<sizeof(ptr)<<endl;

   //cout<<&arr[0]<<endl;
   //cout<<arr<<endl;
   //cout<<&arr <<endl;

   //char ch[]="shiva";
   //char *cp=&ch[0];
   //char *cp="prasad";
   //cp+=2; 
   //cout<<*cp<<endl;
   //cout<<&ch<<endl;

   //FUNCTION
   //char name[]="shiva";
   //char *sp=&name[0];
  //  Print(sp);
  
  //int value=5;
  //update(&value);

  int num=5;
  int *p=&num;

  cout<<p<<endl;
 // updates(p);
  cout<<p<<endl;

}