
/*{
    int a[6]={4,3};
    //cout<<a[4]<<"\n";
    for(int i=0 ; i<6 ; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}  */
//string r="shiva";
//string rev = "";
//rev = rev + r[3];

/*{
    
    string rev = "shiva";
    string rev = "";
    for(int i = str.size()-1;i>=0 ;i--){
        rev += str[i];
    }
    
    return rev;
    
}
*/
/*{
    int a=3;
    cout<<sizeof(int)<<endl;
}
*/
/*{
    string str ="shiva";
    string rev = "";
    for(int i = str.size()-1; i>=0 ; i--){
        rev += str[i];
    }
    
    cout<<rev;
}*/

/*{
    pair<int ,char>part1;
    part1.first = 100;
    part1.second = 'G';
    
    //return make_pair(part1.first, part1.second);
}*/

/*{
  vector<int>V;
  V.push_back(2);
  V.push_back(6);
  V.push_back(4);
  V.push_back(1);

  for(int i:V)
  {
    cout<<i<<" ";
  }

  //sort(begin(V),end(V));
  sort(V.begin(),V.end());
} */
#include<iostream>
using namespace std;
#include<math.h>


int main()
/*{
    
   int n,ans=0,i=0;
   cout<<"Enter  the number"<<endl;
   cin>>n;

   while(n!=0)
   {
    int bit = n & 1;
    int C_bit = !bit;
    ans+= C_bit*pow(2,i);
    i++;
    n=n>>1;
   }

   cout<<ans;
}*/

{
    int n=5;
    int d = n^0;
    cout<<d;
}
