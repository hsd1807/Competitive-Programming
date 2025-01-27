#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            ans += s[i] == '1';
        }
        cout << ans << '\n';
    }
    return 0;
}
