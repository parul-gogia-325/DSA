class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        vector<int>ans;
        int j=1;int i=0;
        ans.push_back(arr[0]);
        if(arr.size()==1)return ans;
            while(i<arr.size()&& j<arr.size())
            {
                if(arr[i]==arr[j]){
                    j++;
                }
                else{
                    ans.push_back(arr[j]);
                    i=j;
                    j++;
                }
                
            }
        return ans;
    }
};