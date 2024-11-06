#include<iostream>
using namespace std;

int main(){
    string s="abc";
    int temp=0;
    for(int i=0; i<s.length(); i++){
        temp^=s[i];
    }


    temp^='a';
    temp^='b';
    temp^='c';

    cout<<temp<<endl;
}
