class RecentCounter {
    vector<int> counter;
    
public:
    RecentCounter() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    
    int ping(int t) {
        int cnt = 0;
        counter.push_back(t);
        int index = counter.size() - 1;
        while (index >= 0 && t-counter[index--] <= 3000) cnt++;
        return cnt;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
