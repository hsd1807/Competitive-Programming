class MagicDictionary {
    vector<string> dictionary;
public:
    MagicDictionary() {
        
    }
    
    void buildDict(vector<string> dictionary) {
        swap(dictionary, this->dictionary);
    }
    
    bool search(string searchWord) {
        for (int i = 0; i < dictionary.size(); i++) {
            if (searchWord.size() == dictionary[i].size()) {
                int diff = 0;
                for (int j = 0; j < searchWord.size(); j++) {
                    if (searchWord[j] != dictionary[i][j])
                        diff++;
                    if (diff == 2) break;
                }
                if (diff == 1) return true;
            }
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */
