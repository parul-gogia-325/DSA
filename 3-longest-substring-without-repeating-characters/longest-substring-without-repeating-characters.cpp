class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low=0;
        int high=0;
    map<int , int>mpp;
    int res=0;
        while(high<s.size()){
            mpp[s[high]]++;
            while(mpp.size()<high-low+1){
                mpp[s[low]]--;
                if(mpp[s[low]]==0){
                    mpp.erase(s[low]);
                }
                low++;
            }

            if(mpp.size()==high-low+1){
                res= max(res , high-low+1);
            }
            high++;

        }
        return res;
    }
};