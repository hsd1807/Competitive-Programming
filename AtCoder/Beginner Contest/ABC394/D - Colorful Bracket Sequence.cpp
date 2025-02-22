#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;
    stack<char> st;
    bool ok = true;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '<') {
            st.push(str[i]);
        }
        else {
            if (st.empty()) {
                ok = !ok;
                break;
            }
            if (st.top() == '(' && str[i] == ')') st.pop();
            else if (st.top() == '[' && str[i] == ']') st.pop();
            else if (st.top() == '<' && str[i] == '>') st.pop();
            else {
                ok = !ok;
                break;
            }
        }
    }
    if (st.size()) ok = false;
    cout << (ok ? "Yes" : "No") << '\n';
}
