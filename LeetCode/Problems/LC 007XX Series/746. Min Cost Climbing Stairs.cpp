class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int last = cost[0];
        int prev = cost[1], curr;
        for (int i = 2; i < cost.size(); i++) {
            curr = cost[i] + min(prev, last);
            last = prev;
            prev = curr;
        }
        return min(prev, last);
    }
};
