class Solution {
public:
    int characterReplacement(string s, int k) {
        int low =0;
        int high=0;
        int maxf= INT_MIN;
        int res =-1;
        map<int , int>mpp;
        while(high<s.size()){
               mpp[s[high]]++;
               maxf=max(maxf , mpp[s[high]]);
               while((high-low+1)-maxf>k){
                mpp[s[low]]--;
                low++;
                if(mpp[s[low]]==0){
                    mpp.erase(s[low]);
                }
               }

               res = max(res , high-low+1);
               high++;

        }
        return res;
   
    }
};