class Solution{
    public:
    // Function to find equilibrium point in the array // a: input array // n: size of array
    int equilibriumPoint(long long arr[], int n) {
        long long arrSum = 0, beforeSum = 0;
        for (int i = 0; i < n; i++) {
            arrSum += arr[i];
        }
        for (int i = 0; i < n; i++) {
            arrSum -= arr[i];
            if (arrSum == beforeSum)
                return i+1;
            beforeSum += arr[i];
        }
        return -1;
    }

};
