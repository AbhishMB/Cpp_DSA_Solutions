#include <iostream>
#include <string.h>
#include <ctype.h>
#include <vector>

using namespace std;


string fill(string s){
  int n = s.length();

  for(int i=0;i<n;i++){
    if(s[i]==' '){
      s[i]='%';
    }
  }

  return s;
}



//// to check if string is pallindrome
///
char tolower(char &s){
  if(s>='A' && s<='Z' ){
    return (char) (32 + (int)s);
  } 
  else{
    return s;
  }
}
bool checkpal(string k){
  int s = 0;
  int e = k.length()-1;
  while(s<e){
    if(tolower(k[s])!= tolower(k[e])){
      return false;
    }
    else{
      s++;
      e--;
    }
  }
  return true;


}


//// GIVEN A INPUT OF STRING SENTENCE CHECK IF PALLINDROME AFTER CONVERTING UPPER TO LOWER AND NEGLECTING ALPHANUMERINCS AND SPACES;
///

bool checkpallstr( string k){
  int s=0;
  int e = k.length()-1;

  
  while(s<=e){
    if(!isalnum(k[s])){
    s++;
    continue;
  }
    if(!isalnum(k[e])){
    e--;
    continue;
  }

    if(tolower(k[s])!=tolower(k[e])){
      return false;
    }
    
    s++;
    e--;
    
  }
   return true;

}


/// check if the char are uinque in string

bool isUniqueChars(const string &str){
		if (str.length() > 128){
			return false;
		}
		vector<bool> char_set(128);
		for (int i = 0; i < str.length(); i++){
			int val = tolower(str[i]);
      //int val = str[i];

			if (char_set[val]){
				return false;
			}
			char_set[val] = true;
		}
		return true;
}

//2 another way  if constrain of 100 is given on array size;
char isunique(string &s){
    int arr[26] = {0};
    

    for(int i=0;i<s.length();i++){
      int val;
      if(s[i]>='a' && s[i]<='z'){
        val = s[i]-'a';
        arr[val]++;
      }
      else{
        val = s[i]-'A';
        arr[val]++;
      }
////  if letter  needs lexicographically smaller than other twice repeated letter
    //  if(arr[val]>1){
    //    return 'a'+val;
  //    }
      
    }

    int max = -1 , ans;
    for(int i=0;i<26;i++){
      if(max<arr[i]) {
        max = arr[i];
        ans = i;
      }
    }
    return 'a'+ans;
   

    


}

int main(){
  string s1 = "My john Smith  ";

  string s2 = fill(s1);
  cout<<s2<<endl;
  char c ='A';
  int n = c;
  int m = n+32;
  cout<<(char)m<<endl;

  char x = (char) (32+(int)c);
  cout<<x<<endl;

  string b = "A1b22Ba";
  string l = "5?36@63?5";

  cout<<checkpal(b)<<endl;
  cout<<checkpal(l)<<endl;

  string h ="A man, a plan ,a canal: Panama";
  string v = "race a car";
  cout<<checkpallstr(h)<<endl;
  cout<<checkpallstr(v)<<endl;

  vector<string> words = {"abcde", "heLlo", "apple", "kite", "padle"};
		for (auto word : words)
		{
			cout << word << string(": ") << boolalpha << isUniqueChars(word) <<endl;
		}
   string y = "testsamplE"; 
    cout<< isunique(y)<<endl;

    cout<< (char)('a'+6)<<endl;
  string o;
    getline(cin,o); ///string imput
    cout<<o<<endl;
    getline()

  

  return 0;

}

