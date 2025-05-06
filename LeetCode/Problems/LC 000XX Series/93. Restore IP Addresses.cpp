class Solution {
public:
    bool isValidIP(string& s) {
        string num = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '.') {
                num += s[i];
            } else {
                long long n = stoll(num);
                string num1 = to_string(n);
                if (num1 == num && stoll(num) >= 0 && stoll(num) <= 255) {
                    num = "";
                } else {
                    return false;
                }
            }
        }
        if (num.size() == 0) {
            return false;
        }
        long long n = stoll(num);
        string num1 = to_string(n);
        if (!(num1 == num && stoll(num) >= 0 && stoll(num) <= 255)) {
            return false;
        }
        return true;
    }
    void generateIP(int index, int dots, string& ip, string& s, vector<string>& ans) {
        if (index == s.size()) {
            cout << ip << endl;
            if (dots == 3) {
                if (isValidIP(ip)) {
                    ans.push_back(ip);
                }
            }
            return;
        }
        ip += s[index];
        generateIP(index + 1, dots, ip, s, ans);
        if (dots < 3) {
            ip += '.';
            generateIP(index + 1, dots + 1, ip, s, ans);
            ip.pop_back();
        }
        ip.pop_back();
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        string ip;
        generateIP(0, 0, ip, s, ans);
        return ans;
    }
};
