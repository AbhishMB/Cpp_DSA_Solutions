////iGiven an array of characters chars, compress it using the following algorithm:

/*Begin with an empty string s. For each group of consecutive repeating characters in chars:

If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars.
Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {
   
        int ansindex=0;
        int n = chars.size();
        int i=0;

        while(i<n){
/// first count the repeated chars by comparing them to previous and monitor the count
            int j=i+1;

            while(j<n && chars[i]==chars[j]){
                j++;
               
            }
            //so when the similar characters stop occuring the loop exits
            /// note the question demands not to use any extra arrays

            chars[ansindex++] = chars[i];

            int count = j-i;
            if(count>1){
                string s= to_string(count);
                for(char c:s){
                    chars[ansindex++] = c;
                }
            }

            i=j;

        }
    return ansindex;
        
    }

int main(){
    
  vector<char> v = {'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'b', 'c', 'c', 'c'};
  cout<<compress(v)<<"\n";
  for(char c:v){
    cout<<c<<",";
  }
  cout<<"\n";
  for(int i=0;i<6;i++){
    cout<<v[i]<<",";
  }

    
  return 0;
}
