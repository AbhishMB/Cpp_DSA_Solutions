#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string>m;
    //two type of traversing
    m[1]=" shiva";
    m.insert({3,"prasad"});

    for(auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it=m.find(1);
    for(auto i=it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }
    return 0;
}