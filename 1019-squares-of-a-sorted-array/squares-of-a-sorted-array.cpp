class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int negindex=-1;
        for(int i=0 ; i< nums.size() ; i++){
            if(nums[i]<0)negindex++;
            nums[i]=pow(nums[i],2);
        }
 
 int posindex=negindex+1;
        while(negindex>=0 && posindex<nums.size()){
            if(nums[negindex]==nums[posindex]){
                ans.push_back(nums[negindex]);
                negindex--;
            }
            else if(nums[negindex]<nums[posindex]){
                ans.push_back(nums[negindex]);
                negindex--;
            }
            else{
                ans.push_back(nums[posindex]);
                posindex++;
            }

        }
    while(negindex>=0){
        ans.push_back(nums[negindex]);
        negindex--;
    }
    while(posindex<nums.size()){
        ans.push_back(nums[posindex]);
        posindex++;
    }
        return ans;
    }
};