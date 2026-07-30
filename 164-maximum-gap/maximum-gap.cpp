class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2)return 0;
        int low =INT_MAX;
        int high = INT_MIN;
        for(int i=0 ; i< nums.size() ; i++){
            low = min(low , nums[i]);
            high = max(high , nums[i]);
        }
        int bucketsize = max(1, (high- low)/(n-1));
        int bucketcount = ((high-low)/bucketsize)+1;

        vector<vector<int>>bucket(bucketcount);
        for(int i=0 ; i<n ; i++){
           int index=  (nums[i]-low)/bucketsize;
           bucket[index].push_back(nums[i]);           
        } 

        int preMax=low;
int gap=0;
        for(auto &x: bucket){
            if(x.empty())continue;
            int currmin=INT_MAX;
            int currmax= INT_MIN;
            for(int i=0 ; i<x.size() ; i++){
                currmin = min(currmin , x[i]);
             currmax= max(currmax , x[i]);  

          
            }
            if(currmin-preMax>gap){
                    gap = currmin-preMax;
             }  
             preMax=currmax;  
        }
return gap;


    }
};