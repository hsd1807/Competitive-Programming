class Bank {
    vector<long long> bank;

public:
    Bank(vector<long long>& balance) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        swap(balance, bank);
    }
    bool check(int account) {
        return account > 0 && account <= bank.size();
    }
    bool transfer(int account1, int account2, long long money) {
        if(check(account1) && check(account2)) {
            if(bank[account1 - 1] >= money) {
                bank[account1 - 1] -= money;
                bank[account2 - 1] += money;
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }
    
    bool deposit(int account, long long money) {
        if(check(account)) {
            bank[account - 1] += money;
            return true;
        }
        else
            return false;
    }
    
    bool withdraw(int account, long long money) {
        if(check(account)) {
            if(bank[account - 1] >= money) {
                bank[account - 1] -= money;
                return true;
            }
            else
                return false;
        }
        else
            return false;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */
