#include<iostream>
using namespace std;

class Hero
{
    //private :
    //int health;

    public :
    char level;
    int health;
    char *name;

    Hero (){
        name = new char[100];
    }

    void sethealth(char name[])
    {
        this ->name = name;
    }

    void print()
    {
        cout<<endl;
        cout<<"name is "<<this ->name<<" ,";
        cout<<"health is "<<this ->health<<" ,";
        cout<<"level is "<<this ->level<<" ,";
        cout<<endl<<endl;;
    }


};    

int main(){
    Hero Hero1;
    Hero1.health = 90;
    Hero1.level = 'A';
    char name[7]="Babbar";
    Hero1.sethealth(name);

    Hero1.print();

    Hero Hero2(Hero1);

    Hero2.print();

    Hero2.name[0] = 'G';

    Hero2.print();
 
    Hero1.print();

    Hero2.level = 'w';

    Hero2.print();
 
    Hero1.print();

}
