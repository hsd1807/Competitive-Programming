class Solution {
public:
    string restoreString(string shuffled, vector<int>& indices) {
        string s=shuffled;
        for(int i=0;i<indices.size();i++)
            s[indices[i]]=shuffled[i];
        return s;
    }
};
