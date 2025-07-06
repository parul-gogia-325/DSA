class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        vector<int>ps(nums.size());
        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]==0)nums[i]=-1;
        }
        ps[0]=nums[0]; //-1
        for(int i=1 ; i< nums.size() ; i++){
            ps[i]= ps[i-1] +nums[i];
        }
       int len=0;
        unordered_map<int , int>mpp;
        mpp[0]=-1;
        for(int i=0 ; i<ps.size() ; i++){
            if(mpp.find(ps[i])!=mpp.end()){
               len= max((i-mpp[ps[i]] ) , len);
            
            }
            else{
                mpp[ps[i]]=i;
            }
        }
        return len;
    }
};