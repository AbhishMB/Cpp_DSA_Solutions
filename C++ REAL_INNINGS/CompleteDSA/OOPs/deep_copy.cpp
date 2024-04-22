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

    //Hero (Hero &temp){
     //   char *ch= new char[99+1];
      //  //strpy(ch,temp.name);
      //  temp.name=ch;
       // this ->name = ch; 
    //}

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

}    