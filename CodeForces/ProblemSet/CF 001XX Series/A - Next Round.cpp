#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,k,score=0,pos=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(a>0) pos++;
		if(i==k){
			score=max(score,a);
		}
		if(i>k&&a==score){
			k++;
		}
	}
	cout<<(score?k:pos);
    return 0;
}
