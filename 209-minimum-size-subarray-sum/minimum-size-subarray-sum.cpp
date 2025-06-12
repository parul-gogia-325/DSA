class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int st=0;
        int end =0;
        int minlen=INT_MAX;
        int sum=0;
        for(int e=0 ; e< nums.size() ; e++){
            sum+=nums[e];
            while(sum>=target){
                minlen = min(minlen , e-st+1);
                sum-=nums[st];
                st++;
            }

        }
return (minlen == INT_MAX) ? 0:minlen;
    }
};