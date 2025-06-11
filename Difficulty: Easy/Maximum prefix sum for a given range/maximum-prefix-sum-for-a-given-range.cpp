class Solution {
public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex, vector<int>& rightIndex) {
        vector<int> result;

        for (int i = 0; i < leftIndex.size(); i++) {
            int l = leftIndex[i];
            int r = rightIndex[i];

            int currentSum = 0;
            int maxPrefix = INT_MIN;

            for (int j = l; j <= r; j++) {
                currentSum += arr[j];
                maxPrefix = max(maxPrefix, currentSum);
            }

            result.push_back(maxPrefix);
        }

        return result;
    }
};
