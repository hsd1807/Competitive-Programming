#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> str;
    vector<vector<int>> str_sort;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        str.push_back(s);
        str_sort.push_back({(int) s.size(), i});
    }
    sort(str_sort.begin(), str_sort.end());
    string ans;
    for (int i = 0; i < n; i++) {
        ans += str[str_sort[i][1]];
    }
    cout << ans << '\n';
}
