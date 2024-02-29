class StockSpanner {
    vector<int> stocks;
public:
    StockSpanner() {
        ios::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
    }
    
    int next(int price) {
        int span = 0;
        stocks.push_back(price);
        for (int i = stocks.size()-1; i >= 0; i--) {
            if (stocks[i] > price) break;
            else span++;
        }
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
