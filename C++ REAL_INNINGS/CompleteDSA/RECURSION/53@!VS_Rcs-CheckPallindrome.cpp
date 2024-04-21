#include<iostream>
using namespace std;

bool CheckPallindrome(string str,int s, int e)
{
    if (s>e)
    {
        return 1;
    }

    if (str[s]!=str[e])
    {
        return 0;
    }
    else{
        CheckPallindrome(str, s+1, e-1);

    }
}

int main()
{
    string str;
    cin>>str;
    cout<<endl;
    int s=0 , e=str.length()-1;

    bool isPalli = CheckPallindrome(str, s, e);
    
    if(isPalli)
    {
        cout<<"pallindrome";
    }
    else
    {
        cout<<"Not a pallindrome";
    }
}