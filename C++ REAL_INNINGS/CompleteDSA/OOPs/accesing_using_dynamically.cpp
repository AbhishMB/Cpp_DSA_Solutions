#include<iostream>
using namespace std;

class Hero
{
    //private :
    //int health;

    public :
    char level;
    int health;


    //Hero()
    //{
    //    cout<<endl<<"constructer called"<<endl<<endl;
    //}

    Hero (int health, char level)
    {
       this -> health=health;
       this -> level=level;
    }

    //copy construecter
    Hero (Hero& temp )
    {
       this -> health=temp.health;
       this -> level=temp.level; 
    } 


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
    //own constructer
    //cout<<"hi"<<endl;
    //Hero ramesh;
    //cout<<"hello"<<endl;

    //parameterised
    Hero shiva(70, 'D');
    cout<<"health is "<<shiva.health<<endl;
    cout<<"level is "<<shiva.level<<endl; 
    
    //copied constructer
    //Hero mani(shiva);
    //cout<<"health is "<<mani.health<<endl;
    //cout<<"level is "<<mani.level<<endl;

    //copy constructer
    Hero mani(shiva);

    /*
    //ramesh.health =90;
    ramesh.sethealth( 70);
    ramesh.level= 'A';

    cout<<"health is "<<ramesh.gethealth()<<endl;
    cout<<"level is is "<<ramesh.level;
    cout<<endl<<endl;

    Hero *b = new Hero;

    //one type
    (*b).sethealth(50);
    (*b).level = 'Z';

    cout<<"health is "<<(*b).gethealth()<<endl;
    cout<<"level is is "<<(*b).level;


    //anoter type
    b->sethealth(60);
    b->level= 'Y';

    cout<<"health is "<<b->gethealth()<<endl;
    cout<<"level is is "<<b->level;
     */



}