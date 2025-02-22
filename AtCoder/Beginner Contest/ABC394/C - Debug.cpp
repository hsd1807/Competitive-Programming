#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    string ans;
    stack<char> st;
    st.push(str[0]);
    for (int i = 1; i < str.size(); i++) {
        int cnt = 0;
        while(!st.empty() && st.top() == 'W' && str[i] == 'A') {
            st.pop();
            cnt++;
        }
        if (cnt) st.push('A');
        else st.push(str[i]);
        while (cnt--) {
            st.push('C');
        }
    }
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
}
