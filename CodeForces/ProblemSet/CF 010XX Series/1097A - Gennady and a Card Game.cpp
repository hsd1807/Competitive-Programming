#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    string card;
    cin>>card;
    vector<string> cards(5);
    for(int i=0;i<5;i++){
        cin>>cards[i];
        if(card[0] == cards[i][0] || card[1] == cards[i][1]){
            cout<<"YES"<<'\n';
            return 0;
        }
    }
    cout<<"NO"<<'\n';
    return 0;
}
