class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int , int>mpp;
        mpp[0]=1;
        int c=0;
        int currsum=0;
        for(int i=0 ; i< nums.size() ; i++){
            currsum+=nums[i];
            if(mpp.find(currsum-k)!=mpp.end()){
                c+=mpp[currsum-k];
            }
            
                mpp[currsum]++;
            

        }
        return c;
    }
};