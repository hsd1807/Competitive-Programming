#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int cnt=0;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='a') cnt++;
        else cnt--;
    }
    cout << (cnt > 0? s.size(): s.size()-abs(cnt-1)) << '\n';
    return 0;
}
