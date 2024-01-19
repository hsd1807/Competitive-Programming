#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<string> s(n),t(m);
    for(int i=0; i < n; i++){
        cin >> s[i];
    }
    for(int i=0; i < m; i++){
        cin >> t[i];
    }
    int q;
    cin >> q;
    while(q--){
        int N;
        cin >> N;
        cout << s[(N-1)%n] + t[(N-1)%m] << '\n';
    }
    return 0;
}
