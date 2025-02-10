#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int b;
        cin >> b;
        a[0] = min(a[0], b - a[0]);
        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (a[i] >= a[i - 1] && b - a[i] >= a[i - 1]) {
                a[i] = min(a[i], b - a[i]);
            }
            else if (b - a[i] >= a[i - 1]) {
                a[i] = b - a[i];
            }
            if (a[i] < a[i - 1]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
