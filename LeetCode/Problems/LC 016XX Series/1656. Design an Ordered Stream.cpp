class OrderedStream {
    vector<string> Stream = {""};
    int index = 1;
public:
    OrderedStream(int n) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        for (int i = 1; i <= n; i++)
            Stream.push_back("");
    }
    vector<string> insert(int idKey, string value) {
        vector<string> ans;
        Stream[idKey] = value;
        while(index < Stream.size() && Stream[index] != "") {
            ans.push_back(Stream[index]);
            index++;
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
