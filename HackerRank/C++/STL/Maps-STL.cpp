#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    map<string, int> m;
    while (q--) {
        int n;
        cin >> n; 
        string str;
        cin >> str; 
        if (n == 1) {
            int marks;
            cin >> marks;
            m[str] += marks;
        }
        else if (n == 2) {
            m[str] = 0;
        }
        else {
            cout << m[str] << '\n';
        }
    }
    return 0;
}
