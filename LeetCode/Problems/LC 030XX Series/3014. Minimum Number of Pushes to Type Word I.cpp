class Solution {
public:
    int minimumPushes(string word)
    {
        int n = word.size();
        int pushes = 0;
        while (n > 0) {
            pushes += n;
            n -= 8;
        }
        return pushes;
    }
};
