#include<iostream>
//#include "hero.cpp"
using namespace std;

class Hero
{
    //public :
    private :
    int health;
    public :
    char level;

    /*void print()
    {
        cout<<level<<endl;
    }*/
    
    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health=h;
    }

    void setLevel(char ch)
    {
        level=ch;
    }
};

int main()
{
    Hero ramesh;

    //ramesh.sethealth(70);
    //ramesh.health=70;
    //ramesh.level = 'B';
    ramesh.setHealth(70);
    ramesh.setLevel('B');
    
    cout<<"helath is "<<ramesh.getHealth()<<endl;
    cout<<"level is "<<ramesh.getLevel()<<endl;
    cout<<"Size of "<<sizeof(ramesh)<<endl;
    return 0;
}