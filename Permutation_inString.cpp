#include <iostream>
#include <string>

using namespace std;



int checkEqual(int c1[],int c2[]){
        for(int i=0;i<26;i++){
            if(c1[i]!=c2[i]){
                return 0;
            }
        }
        return 1;
    }

    bool checkInclusion(string s1, string s2) {
        
        int count1[26]={0};
        
        for(int i=0;i<s1.length();i++){
            int index = s1[i]-'a';
            count1[index]++;
        }

        int i=0;
        int window_size = s1.length();
        int count2[26]={0};
       while(i<window_size && i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }

        if(checkEqual(count1,count2)) return 1;

        while(i<s2.length()){
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i-window_size];
            index = oldChar - 'a';
            count2[index]--;
            i++;
            if(checkEqual(count1,count2)) return 1;
        }

        return 0;

        


    }

int main(){

  string s2 = "ayubdoomvbpdlirdb";
  string s1 ="bd";

  cout<<boolalpha<<checkInclusion(s1,s2)<<"\n";

  return 0;
}

