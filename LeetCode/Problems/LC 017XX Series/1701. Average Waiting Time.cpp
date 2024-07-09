class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int time = customers[0][0] + customers[0][1];
        double wt = customers[0][1];
        for (int i = 1; i < customers.size(); i++) {
            if (time - customers[i][0] > 0) {
                wt += time - customers[i][0] + customers[i][1];
            }
            else {
                time += customers[i][0] - time;
                wt += customers[i][1];
            }
            time += customers[i][1];
        }
        double n = customers.size();
        return wt / n;
    }
};
