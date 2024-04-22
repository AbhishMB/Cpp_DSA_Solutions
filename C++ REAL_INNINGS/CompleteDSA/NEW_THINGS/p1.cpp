#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(5);

    //myvector.erase(myvector.begin()+2);
    //myvector.erase(myvector.end()-2);


    for(int i=0; i<myvector.size(); i++)
    {
        cout<<myvector[i]<<" ";
    }

}    