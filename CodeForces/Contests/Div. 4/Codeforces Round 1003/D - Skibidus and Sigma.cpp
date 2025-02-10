#include <bits/stdc++.h>

using namespace std;

int binarySearch(int x, vector<int>& b) {
    int ans = INT_MAX, start = 0, end = b.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (b[mid] == x) {
            return b[mid];
        }
        else if (b[mid] > x) {
            ans = min(ans, b[mid]);
            end = mid - 1;
        }
        else {
            start = mid + 1;
        } 
    }
    if (ans == INT_MAX) {
        return 0;
    }
    return ans;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<long long>> a(n, vector<long long>(2));
        vector<vector<long long>> b(n, vector<long long>(2));
        for (int i = 0; i < n; i++) {
            long long sum = 0, totalSum = 0; 
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                totalSum += x;
                sum += totalSum;
            }
            a[i][0] = sum;
            a[i][1] = i;
            b[i][0]= totalSum;
            b[i][1] = i;
        }
        sort(b.rbegin(), b.rend());
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            //cout << a[b[i][1]][0] << ' ' << b[i][0] << endl;
            ans += a[b[i][1]][0] + ((n * m)-  (m * (i + 1))) * (b[i][0]);
        }
        cout << ans << '\n';
    }
    return 0;
}
