class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=nums[0];
        int bestmaxprod=nums[0];
        int bestminprod=nums[0];

        for(int i=1 ; i<nums.size() ; i++){
            int maxi = max({bestmaxprod*nums[i] , nums[i] , bestminprod*nums[i]});
            int mini = min({bestmaxprod*nums[i] , nums[i] , bestminprod*nums[i]});
            bestmaxprod= maxi;
            bestminprod=mini;
            prod =max(bestmaxprod ,prod );
        }
        return prod;
        


    }
};