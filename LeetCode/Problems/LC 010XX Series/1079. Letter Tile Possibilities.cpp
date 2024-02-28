class Solution {
public:
    int permute(string& temp, int index) {
        if(index == temp.size()) {
            return 1;
        }
        int ans = 0;
        vector<bool> use(26,0);
        for (int i = index; i < temp.size(); i++) {
            if(!use[temp[i]-'A']) {
                use[temp[i]-'A'] = 1;
                swap(temp[index], temp[i]);
                ans += permute(temp, index+1);
                swap(temp[index], temp[i]);
            }
        }
        return ans;
    }
    int subsets(vector<int>& letters, int index, string& temp) {
        if (index == 26) {
            return permute(temp, 0);
        }
        int ans = 0;
        if(letters[index]) {
            letters[index]--;
            temp.push_back(index+'A');
            ans += subsets(letters, index, temp);
            temp.pop_back();
            letters[index]++;
        }
        ans += subsets(letters, index+1, temp);
        return ans;
    }
    int numTilePossibilities(string tiles) {
        string temp;
        vector<int> letters(26,0);
        for (int i = 0; i < tiles.size(); i++) {
            letters[tiles[i]-'A']++;
        }
        return subsets(letters, 0, temp) - 1;   
    }
};
