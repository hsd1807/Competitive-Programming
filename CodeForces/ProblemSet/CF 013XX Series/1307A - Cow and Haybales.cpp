#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 1; i < n; i++){
            if(i*a[i] <= d){
                a[0]+=a[i];
                d-=i*a[i];
            }
            else{
                while(d){
                    if(i <= d){
                        a[0]++;
                        d-=i;
                    }
                    else{
                        break;
                    }
                }
            }
            if(!d) break;
        }
        cout << a[0] << '\n';
    }
    return 0;
}
