class Solution {
public:
    string minRemoveToMakeValid(string s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int cnt = 0;
        string vps;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                vps.push_back(s[i]);
                cnt++;
            }
            else if (s[i] == ')') {
                if (cnt) {
                    vps.push_back(s[i]);
                    cnt--;
                }
            }
            else {
                vps.push_back(s[i]);
            }
        }
        int index = vps.size() - 1;
        s = "";
        while (cnt) {
            if (vps[index] == '(') {
                cnt--;
            }
            else {
                s.push_back(vps[index]);
            }
            index--;
        }
        while (index >= 0) {
            s.push_back(vps[index--]);
        }
        vps = string(s.rbegin(), s.rend());
        return vps;
    }
};
