#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<string> str(n);
    for(int i=0;i<n;i++){
        cin>>str[i];
        bool found=false;
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                found=true;
                break;
            }
        }
        cout<<(found?"YES":"NO")<<'\n';
    }
    return 0;
}
