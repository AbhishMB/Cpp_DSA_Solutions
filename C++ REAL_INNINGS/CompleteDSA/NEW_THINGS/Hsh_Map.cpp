#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
   //Creation
   unordered_map<string,int>m;
   
   //Insertion
   //1
   pair<string,int> p=make_pair("babbar",3);
   m.insert(p);
   //2
   pair<string,int>pair2("love",2);
   m.insert(pair2);  

   //3
   m["mera"]=1;

   //what will happen
   m["mera"]=10;

   //Search
   cout<<m.at("babbar")<<endl;
   cout<<m["mera"]<<endl;

   //cheeck ->error
   //cout<<m.at("unknown")<<endl;

   //correction
   cout<<m["unknown"]<<endl;    //not present adds zero
   cout<<m.at("unknown")<<endl;

   //Size
   cout<<"SIZE = "<<m.size()<<endl;

   //check p or n
   cout<<"Check "<<m.count("love")<<endl;

   //erase
   m.erase("love");
   cout<<"SIZE = "<<m.size()<<endl;

   //Traversing
   //1
   cout<<endl<<"The elements are"<<endl;
   for(auto i:m )
   {
     cout<<i.first<<" "<<i.second<<endl;
   }

   //2
   cout<<endl<<"The elements are"<<endl;
   unordered_map<string,int> :: iterator it = m.begin();

   while(it !=m.end())
   {
    cout<<it->first<<" "<<it->second<<endl;
    it++;
   }

    return 0;

}