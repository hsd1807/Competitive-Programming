#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int x, y;
        cin >> x >> y;
        if (x + 1 == y) {
            cout << "Yes" << '\n';
        }
        else if (x > y && (x - y) % 9 == 8) {
            cout << "Yes" << '\n';
        }
        else {
            cout << "No" << '\n';
        }
    }
    return 0;
}
