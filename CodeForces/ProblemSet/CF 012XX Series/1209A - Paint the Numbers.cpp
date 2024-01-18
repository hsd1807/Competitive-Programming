#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,colors=0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]!=-1){
        for(int j=i+1;j<n;j++){
            if(a[j]!=-1)
                if(a[j]%a[i]==0)
                    a[j]=-1;
        }
        colors++;
        a[i] = -1;
    }
    }
    cout << colors << '\n';
    return 0;
}
