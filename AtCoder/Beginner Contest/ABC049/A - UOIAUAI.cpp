#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    char c ;
    cin>>c ;
    const string vowel = "aeiou";
    if(vowel.find(c) != string:: npos) cout<<"vowel";
    else cout<<"consonant";
    return 0;
}
