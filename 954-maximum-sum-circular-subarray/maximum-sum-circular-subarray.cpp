class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxbest = nums[0];
        int minbest=nums[0];
        int wholesum=0;
        for(int i=0 ; i<nums.size(); i++){
            wholesum+=nums[i];
        }
int maxres=nums[0];
int minres=nums[0];
        for(int i=1 ; i<nums.size() ; i++){
            maxbest =max(maxbest+nums[i] , nums[i]);
            minbest = min(minbest+nums[i] , nums[i]);

          maxres=  max(maxbest , maxres);
          minres=min(minbest , minres);
        } 
        if(maxres<0)return maxres;
        return max(maxres  , wholesum-minres);
    }
};