class Solution{
public:
	void rearrange(int arr[], int n) {
	    vector<int> positive, negative;
	    for (int i = 0; i < n; i++){
	        if (arr[i] < 0)
	            negative.push_back(arr[i]);
	        else
	            positive.push_back(arr[i]);
	    }
	    int index = 0, pos = 0, neg = 0;
	    while (pos < positive.size() && neg < negative.size()){
	        if(index%2)
	            arr[index++] = negative[neg++];
	        else
	            arr[index++] = positive[pos++];
	    }
	    while (pos < positive.size()) arr[index++] = positive[pos++];
	    while (neg < negative.size()) arr[index++] = negative[neg++];
	}
};
