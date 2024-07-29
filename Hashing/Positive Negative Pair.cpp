class Solution{
public:
    vector<int> findPairs(int arr[], int n) {
        unordered_set<int> seen;
        vector<int> result;
        
        for (int i = 0; i < n; ++i) {
            int num = arr[i];
            if (seen.find(-num) != seen.end()) {
                if (num > 0) {
                    result.push_back(-num);
                    result.push_back(num);
                } else {
                    result.push_back(num);
                    result.push_back(-num);
                }
            }
            seen.insert(num);
        }
        
        return result;
    }
};

//This is Updated code
