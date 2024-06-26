#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int>s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(int i : s)
    {
        cout<<i<<" ";
    }cout<<endl;

    s.erase(s.begin());
    for(int i : s)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    //erase middle element
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(int i : s)
    {
        cout<<i<<" ";
    }cout<<endl;
   
    //for checking present or not
    cout<<"5 is present or not - "<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(6);
    cout<<*itr;

    return 0;
}