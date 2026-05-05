class Solution {
public:
    int longestOnes(vector<int>& s, int k) {
        int low =0;
        int high = 0;
int res = 0;
map<int , int >mpp;
        while(high<s.size()){
            mpp[s[high]]++;

            while(high-low+1 - mpp[1]>k){
                mpp[s[low]]--;
                if(mpp[s[low]]==0){
                    mpp.erase(s[low]);
                }
                low++;
            }

            res= max(res , high-low+1);
            high++;
        }
        return res;
    }
};