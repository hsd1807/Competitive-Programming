#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    bool possible=true;
    string heading,text;
    getline(cin,heading);
    getline(cin,text);
    vector<int> availability(256,0);
    for(int i=0;i<heading.size();i++)
        availability[heading[i]]++;
    for(int i=0;i<text.size();i++){
        if(text[i]!=' '){
            availability[text[i]]--;
        if(availability[text[i]]<0){
            possible=false;
            break;
        }
    }
    }
    cout<<(possible?"YES":"NO");
    return 0;
}
