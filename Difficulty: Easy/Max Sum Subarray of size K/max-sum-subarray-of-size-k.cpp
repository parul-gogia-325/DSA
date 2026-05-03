class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
       int low =0;
       int high = k-1;
       int sum=0;
       for(int i=0 ; i<= high ; i++){
           sum+=arr[i];
       }
       int res = INT_MIN;
       while(high<arr.size()){
         low++;
         high++;
         res= max(sum , res);
         if(high>arr.size())return res;
         sum= sum+arr[high]-arr[low-1];
         
       }
       return res;
    }
};