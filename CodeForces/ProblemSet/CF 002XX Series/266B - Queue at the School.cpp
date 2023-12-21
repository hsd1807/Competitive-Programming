#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while(t--){
        bool swapped=false;
        for(int i=0;i<n-1;i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                swap(s[i],s[i+1]);
                swapped=true;
                i++;
            }
        }
        if(!swapped) break;
    }
    cout<<s;
    return 0;
}
