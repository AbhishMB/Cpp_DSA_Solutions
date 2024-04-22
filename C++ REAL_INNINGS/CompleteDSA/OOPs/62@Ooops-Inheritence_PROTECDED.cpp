#include<iostream>
using namespace std;

class human{

    protected:
    int height;
    int weight;

    protected:
    int age;

    public :
    int getage()
    {
        return this ->age;
    }

     void serWeight(int w)
     {
        this ->weight=w;
     }

     

};

class male : protected human{
    public:
    string color; 

    void sleep(){
        cout<<"Male Sleeping"<<endl;
    } 

    int getHeight()
    {
        return this -> height;
    }
};

int main()
{
    male m1;
    cout<<m1.getHeight();

    return 0;
}