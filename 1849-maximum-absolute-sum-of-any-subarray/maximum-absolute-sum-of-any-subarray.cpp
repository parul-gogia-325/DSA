class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxsum = nums[0];
        int minsum=nums[0];
        int res = abs(nums[0]);
        for(int i=1 ; i<nums.size() ; i++){
            maxsum = max(maxsum+nums[i] , nums[i]);
            minsum = min(minsum+nums[i] , nums[i]);

          
            res= max({res , abs(maxsum) , abs(minsum)});

        }
        return res;
    }
};