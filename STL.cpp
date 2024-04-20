#include <iostream>
#include <set>

using namespace std; 
  
int main(){

  set <int> s;

  s.insert(0);
  s.insert(7);
  s.insert(3);
  s.insert(8);
  s.insert(4);
  s.insert(5);

  for(int i:s){
    cout<< "set elements are -->"<<i<<endl;
  }

  //std::set<int>::iterator i = s.begin(); 
  set<int>::iterator i = s.begin(); 


  i++;
  cout<<*i<<endl;

  auto it = s.end();
  it--;
  cout<<*it<<endl;
  
  for(auto m:s){
    cout<<m<<endl;
  }
 
  set<int>:: iterator itr = s.find(8);
  cout<< *itr << endl;














  return 0;
}
