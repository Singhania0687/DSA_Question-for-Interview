# include<iostream>
# include<vector>
# include<string>
using namespace std;
class Node{
    public:
    Node* data[26];
    bool endOfWords;
    Node(){
        endOfWords=false;
        for(int i=0;i<26;++i)
             data[i]=nullptr;
    }
};
class Trie {
public:
    Node* root;
    Trie() {
        root =new Node();    
    }
    
    void insert(string word) {
        Node* curr=root;
        for(auto it:word){
            if(curr->data[it-'a']==nullptr)
                 curr->data[it-'a']=new Node();
                 curr=curr->data[it-'a'];  
        }
        curr->endOfWords=true;
        
    }
    
    bool search(string word) {
        Node* curr=root;
        for(auto it:word){
            if(curr->data[it-'a']==nullptr)
                  return false;
                  curr=curr->data[it-'a'];      
        }
        return curr->endOfWords  ; 
    }
    
    bool startsWith(string prefix) {
        Node* curr=root;
        for(auto it:prefix){
            if(curr->data[it-'a']==nullptr)
                 return false;
                 curr=curr->data[it-'a'];
        }
        return true;
        
    }
};
int main(){
    Trie t;
    t.insert("abc");
    t.insert("abd");
    cout<<t.search("abd");
    return 0;
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */