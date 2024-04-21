
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    
    //searching
    cout<<"finding 6->"<<binary_search(v.begin(),v.end(),6)<<endl;

     cout<<"lower bound->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
     cout<<"upper bound->"<<upper_bound(v.begin(),v.end(),6 )-v.begin()<<endl;

    int a=9,b=10;
    cout<<" max->"<<max(a,b);
    cout<<endl;
    cout<<" min->"<<min(a,b);
    cout<<endl;

   // rotate(v.begin(),v.end()); //not working
    for(int i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}













/*#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    return 0;
}*/