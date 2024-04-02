class Solution {
public:
    bool Isomorphic(string& s, string& t) {
        unordered_map<char, char> m;
        for (int i = 0; i < s.size(); i++) {
            if (m[s[i]]) {
                if (m[s[i]] != t[i]) {
                    return false;
                }
            }
            else {
                m[s[i]] = t[i];
            }
        }
        return true;
    }
    bool isIsomorphic(string s, string t) {
        ios::sync_with_stdio(false);
        cin.tie(0);
       return Isomorphic(s,t) && Isomorphic(t,s); 
    }
};
