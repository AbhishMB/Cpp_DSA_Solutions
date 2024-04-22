#include<iostream>
using namespace std;

class B
{
    public:
    int a;
    int b;

    public :
    void operator- (B &obj)
    {
        int v1= this ->a;
        int v2= obj.a;
        cout<<"Output "<<v1+v2;
    }
    
};

int main()
{
    B obj1,obj2;

    obj1.a= 4;
    obj2.a= 7;
    obj1-obj2;
    return 0;
}