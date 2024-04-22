#include<iostream>
using namespace std;

class Hero
{
    private :
    int health;

    public :
    char level;

    //for acessing private 
    int gethealth()
    {
        return health;
    }
    
    //for setting private
    void sethealth(int h)
    {
        health=h;
    }
};

int main()
{
    Hero ramesh;

    //ramesh.health =90;
    ramesh.sethealth( 70);
    ramesh.level= 'A';

    cout<<"health is "<<ramesh.gethealth()<<endl;
    cout<<"level is is "<<ramesh.level;
}