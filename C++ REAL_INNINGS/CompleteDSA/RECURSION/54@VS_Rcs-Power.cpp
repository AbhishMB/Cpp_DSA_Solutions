#include<iostream>
using namespace std;

int Power(int a, int b)
{
    if(b==0)
    {
        return 1;
    }

    if(b==1)
    {
        return a;
    }

    //rcs CALL
    int ans = Power(a,b/2);

    if(b%2==0)
    {
       return ans*ans;
    }

    else{
        return a*ans*ans;
        }
}

int main()
{
    int a,b;
    cout<<"Enter two number "<<endl;
    cin>>a>>b;

    int ans = Power(a,b);
    cout<<ans<<endl;

    return 0;
}