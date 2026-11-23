class Trie {
public:
    Trie* children[26];
    bool isEnd;
    Trie() {
        for(int i = 0; i < 26 ; i++ ){
            children[i] =  nullptr;
        }
        isEnd = false;
    }
    Trie* root = this;
    void insert(string word) {
        Trie* temp = root;  
        for(char ch: word){
            int i = ch - 'a';
            if(!temp->children[i]){
                temp->children[i] = new Trie();
            }
                temp = temp->children[i];
        }  
            temp->isEnd = true;
    }
    
    Trie* traverse(string s){
        Trie* temp = root;
        for(char ch : s){
        int i = ch - 'a';
            if(!temp->children[i]){ 
                return NULL;
            }
            temp = temp->children[i];
        }
        return temp;
    }

    bool search(string word) {
        Trie* temp = traverse(word);
        return temp && temp->isEnd;
    }
    
    bool startsWith(string prefix) {
        return traverse(prefix)!=NULL;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */