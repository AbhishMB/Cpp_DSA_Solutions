#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //creation
    stack<int>S;

    //Push operation
    S.push(2);
    S.push(3);

    //pop
    S.pop();

    cout<<"printing top element :"<<S.top()<<endl;

    if(S.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }
    return 0;
}
