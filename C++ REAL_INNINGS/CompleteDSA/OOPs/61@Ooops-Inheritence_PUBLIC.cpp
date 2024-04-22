#include<iostream>
using namespace std;

class human{

    public:
    int height;
    int weight;

    private:
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

class male : private human{
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

  /*  male ob1;
    //cout<<"wieght"<<ob1.wt<<endl;
    cout<<ob1.age<<endl;
    ob1.getage();

    //cout<<ob1.color<<endl;

    //protected acess
    //cout<<"Weigth after set "<<ob1.getweight()<<endl;
    
    //ob1.sleep();  */

    return 0;
}