#include<iostream>
using namespace std;
#include<vector>
int main()
{
 int idx;
 int array[]={1,2,3,4,5};
 int length=sizeof(array)/sizeof(array[0]);
 vector<int>v;
 v.insert(v.begin()+2,9);
 for(int idx=0;idx<length;idx++);
 cout<<array<<endl;
 return 0;
}