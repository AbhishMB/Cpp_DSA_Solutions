#include<iostream>
using namespace std;

class Hero
{
  //default  private  
  public:
  int health = 70;
  private :
  char level = 'D';

  void print()
  {
    cout <<level<<endl;
  }

};

int main()
{

    Hero ramesh;
    Hero suresh;
    /*
    ramesh.health =90;
    ramesh.level= 'A';
    cout<<endl;
    cout<<"health is "<<ramesh.health<<endl;
    cout<<"level is is "<<ramesh.level;
    cout<<endl<<endl;
    cout<<"health is "<<suresh.health<<endl;
    cout<<"level is is "<<suresh.level;
    */
}
