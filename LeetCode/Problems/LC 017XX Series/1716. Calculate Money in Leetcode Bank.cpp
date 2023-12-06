class Solution {
public:
    int totalMoney(int n)
    {
        int week=0;
        int balance=0;
        int first_week=28;
        for(week=1;week<=n/7;week++){
            balance+=first_week;
            first_week+=7;
        }
        for(int i=1;i<=n%7;i++){
            balance+=week;
            week++;
        }
        return balance;
    }
};
