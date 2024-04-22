#include<iostream>
using namespace std;

void ReverseString(string &str , int s , int e)
{
   if(s>e)
   {
    return ;
   }

   swap(str[s],str[e]);
   s++;
   e--;

   ReverseString(str, s, e);
   
   
}

int main()
{
    string str;
    cin>>str;
    cout<<endl;
    int s=0 , e=str.length()-1;

    ReverseString(str, s, e);

    cout<<str<<endl;

}