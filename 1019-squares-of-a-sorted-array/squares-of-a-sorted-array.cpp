class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        while(i<nums.size() && nums[i]<0 ){
            i++;
        }
      int j=i-1;
for(int i=0 ; i<nums.size() ; i++){
    nums[i]=nums[i]*nums[i];
}

vector<int>ans;
        while(i<nums.size() && j>=0){
            if(nums[i]<nums[j]){
                ans.push_back(nums[i]);
                i++;
            }
            else{
                ans.push_back(nums[j]);
                j--;
            }
        }

        while(i<nums.size()){
           ans.push_back(nums[i]);
                i++;
        }
        while(j>=0){
            ans.push_back(nums[j]);
                j--;
        }
        return ans;
    
    }
};