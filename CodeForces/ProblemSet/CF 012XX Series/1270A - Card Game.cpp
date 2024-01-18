#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        bool found = false;
        for(int i=0; i < k1; i++){
            int a;
            cin >> a;
            if(a==n) found = true;
        }
        for(int i=0; i < k2; i++){
            int a;
            cin >> a;
        }
        cout << (found? "YES" : "NO") << '\n';
    }
    return 0;
}
