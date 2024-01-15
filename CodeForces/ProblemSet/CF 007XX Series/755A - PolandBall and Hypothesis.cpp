#include<bits/stdc++.h>
using namespace std;
bool Composite(int n)
{
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)
            return 1;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n;
	cin>>n;
	if(n%2){
		cout<<3<<'\n';
	}
	else{
		for(int i=1;i<10000;i++){
			if(Composite(n*i+1)){
				cout<<i<<'\n';
				break;
			}
		}
	}
    return 0;
}
