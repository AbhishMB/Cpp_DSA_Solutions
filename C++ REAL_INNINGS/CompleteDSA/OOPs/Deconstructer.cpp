#include<iostream>
using namespace std;

class Hero
{
  public :
    int health;
    char level;

    //destructer called
    ~Hero()
    {
        cout<<"destructer called"<<endl;
    }
};

int main()
{
    //static
    //Hero a;

    cout<<"hi"<<endl;
    //dynamic
   Hero *b = new  Hero();
   //delete b;
}