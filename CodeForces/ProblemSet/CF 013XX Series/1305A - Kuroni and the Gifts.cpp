#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for(int i=0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << '\n';
        for(int i = 0; i < n; i++){
            cout << b[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}
