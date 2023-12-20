class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1=INT_MAX,min2=INT_MAX;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min1){
                min2=min1;
                min1=prices[i];
            }
            else if( prices[i]<min2 && prices[i]>=min1)
                min2=prices[i];
        }
        if(min1+min2<=money) return money-min1-min2;
        return money;
    }
};
