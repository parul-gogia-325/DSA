class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        int k= nums.size()-1;
        int j=k-1;;
int ans=0;
while(i<j&&j<k){
        while(i<j){
            if(nums[i]+nums[j]<=nums[k]){
                i++;
            }
            else {
                ans+=j-i;
                j--;
           }
        }
        k--;
        j=k-1;
        i=0;
}
        return ans;

        
    }
};