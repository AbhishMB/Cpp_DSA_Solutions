#include <iostream>
#include <string>


using namespace std;

string fill(string &s){
  int n = s.length();

  string str;
  int i=0;
 while(s[i]!='\0'){

   if(s[i]==' '){
   str=str+"%20";
   i++;
   continue;
 }

   str=str+s[i];
   i++;

 }
return str;
}

string fillspaces(string &str){                ///  optimised solution
int spaceCount = 0;
    int n = str.length();

    // Count the number of spaces in the string
    for (char c : str) {
        if (c == ' ') {
            spaceCount++;
        }
    }

    // Calculate the new length of the string after replacement
    int newLength = n + spaceCount * 2;

    // Resize the string to accommodate the extra characters
    str.resize(newLength);

    // Start from the end of the original string and replace spaces with "@40"
    for (int i = n - 1, j = newLength - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[j--] = '0';
            str[j--] = '4';
            str[j--] = '@';
        } else {
            str[j--] = str[i];
        }
    }

    return str;

  }
 
int main(){

  string k = "Mr John Smith   ";
  cout<<fill(k)<<endl;

  return 0;
}
