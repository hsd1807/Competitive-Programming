class MyCalendar {
    vector<vector<int>> bookings;
public:
    MyCalendar() {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);  
    }
    
    bool book(int start, int end) {
        vector<int> temp = {start, end};
        for (int i = 0; i < bookings.size(); i++) {
                if (start >= bookings[i][0] && start < bookings[i][1]) return false;
                if (end > bookings[i][0] && end <= bookings[i][1]) return false;
                if (bookings[i][0] >= start && bookings[i][1] < end) return false;
        }
        cout << temp[0] << temp[1] << endl;
        bookings.push_back(temp);
        return true; 
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
