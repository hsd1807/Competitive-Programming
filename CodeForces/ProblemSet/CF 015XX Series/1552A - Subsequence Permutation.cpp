#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tt;
    cin>>tt;
    while(tt--){
        int n,diff=0,index=0;
        cin>>n;
        string s;
        cin>>s;
        vector<int> cnt(26,0);
        for(int i=0;i<n;i++)
            cnt[s[i]-'a']++;
        for(int i=0;i<26;i++){
            if(cnt[i]){
                for(int j=index;j<index+cnt[i];j++){
                    if(s[j]!=i+'a'){
                        diff++;
                    }
                }
                index=index+cnt[i];
            }
        }
        cout<<diff<<'\n';
    }
    return 0;
}
