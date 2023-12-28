#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans,name;
        for(int i=0;i<s.size()-1;i++){
            if(name.size()==0) name+=s[i];
            else if(name.size()==1) name+=s[i];
            else{
                if(s[i+1]=='a'||s[i+1]=='e'){
                    ans+=(name+'.');
                    name=s[i];
                }
                else{
                    name+=s[i];
                    ans+=(name+'.');
                    name="";
                }
            }
        }
        if(name.size()) ans+=(name);
        ans+=s[s.size()-1];
        cout<<ans<<'\n';
    }
    return 0;
}
