#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    vector<int> id(n);
    for(int i=0;i<n;i++){
        cin>>id[i];
    }
    sort(id.begin(),id.end());
    int pairs=0;
    bool ok=true;
    int i=0;
    while(id[i]==0) i++;
    for(i;i<n-1;i++){
        if(id[i]==id[i+1]){
            i++;
            if(i<n-1&&id[i]==id[i+1]){
                ok=false;
                break;
            }
            pairs++;
        }
    }
    cout<<(ok?pairs:-1);
    return 0;
}
