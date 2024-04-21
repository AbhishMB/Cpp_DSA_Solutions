#include<iostream>
#include<string>
using namespace std;

  void FindFstLstIndex(char s[],char ch,int *first,int *last)
  {
    for(int i=0 ; i<5 ; i++)
    {
        if(s[i]==ch)
        {
            *first=i;
            break;

        }
    }

    for(int i=5 ; i>0 ; i--)
    {
        if(s[i]==ch)
        {
            *last=i;
            break;

        }
    }
  }
int main()
{
    char s[15];
    cout<<"enter a string\n";
    gets(s);
    char ch;
    cin>>ch;
    int first=-1,last=-1;
    int *pf=&first;
    int *pl=&last;

    FindFstLstIndex(s,ch,pf,pl);

    cout<<first<<" "<<last;

    return 0;
}