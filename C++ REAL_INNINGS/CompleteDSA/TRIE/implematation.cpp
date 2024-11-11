#include <iostream>
#include <string>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertNode(string word) {
        insertUtil(root, word);
    }

    void insertUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            root->isTerminal = true;
            return ;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursion
        insertUtil(child, word.substr(1));
    }

    bool searchWord(string word) {
        return searchUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word) {
        if (word.length() == 0) {
            return root->isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            return false;
        }

        // Recursion
        return searchUtil(child, word.substr(1));
    }

    void removeWord(string word){
        remove(root, word);
    }

    void remove(TrieNode* root, string word){

      //TrieNode *child;
      int index = word[0] - 'A';
      root = root->children[index]; 

      if(word.length() == 1){
          root->isTerminal = false;
          return ; }

      remove(root, word.substr(1));   
    }
};

int main() {
    Trie* t = new Trie();
    t->insertNode("ABDC");
    t->insertNode("CAT");
    t->insertNode("MBA");

    cout << "Is present or not: " << t->searchWord("ABDC") << endl;

    t->removeWord("ABDC");

    cout << "Is present or not: " << t->searchWord("ABDC") << endl;
}
