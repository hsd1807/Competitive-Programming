#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (m[a[i]]) {
                a[i] = 0;
            }
            else {
                m[a[i]] = 1;
            }
        }
        vector<int> v;
        for (int i = 1; i <= n; i++) {
            if (!m[i]) {
                v.push_back(i);
            }
        }
        for (int i = 0; i < n; i++) {
            if (!a[i]) {
                a[i] = v.back();
                v.pop_back();
            }
            cout << a[i] << " \n"[i == n - 1];
        }

    }
    return 0;
}
