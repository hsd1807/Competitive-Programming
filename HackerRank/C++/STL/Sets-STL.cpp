#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    set<int> s;
    while (q--) {
        int y, x;
        cin >> y >> x;
        if (y == 1) {
            s.insert(x);
        }
        else if (y == 2) {
            s.erase(x);
        }
        else {
            auto it = s.find(x); 
            if (it != s.end()) {
                cout << "Yes";
            }
            else {
                cout << "No";
            }
            cout << '\n';
        }
    } 
    return 0;
}
