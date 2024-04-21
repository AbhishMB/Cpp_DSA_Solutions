#include<iostream>
using namespace std;
int main()
{
char vowel[5];
/*for(int idx=0;idx<5;idx++){
 cin>>vowel[idx];
}*/
for(char &ele:vowel){
 cin>>ele;
}
for(int idx=0;idx<5;idx++){
 cout<<vowel[idx]<<" ";
}
return 0;
}