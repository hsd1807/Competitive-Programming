#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        bool ok = false;
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                ok = true;
                break;
            }
        }
        cout << (ok ? 1 : s.size()) << '\n';
    }
    return 0;
}
