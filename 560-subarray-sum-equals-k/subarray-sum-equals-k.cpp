class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int>ps(nums.size());
        ps[0]=nums[0];
        for(int i=1 ; i< nums.size()  ; i++){
            ps[i]= ps[i-1]+nums[i];
        }
int c=0;
        for(int j=0; j< ps.size() ; j++){
            if(ps[j]==k)c++;
            for(int i=0; i<j ; i++){
                if(ps[j]-k== ps[i]){
                    c++;
                }
            }
        }
        return c;


    }
};