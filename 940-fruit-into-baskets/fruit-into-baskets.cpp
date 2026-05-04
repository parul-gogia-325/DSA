class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low=0;
        int high=0;
map<int , int>mpp;
if(fruits.size()==1)return 1;
int res = -1;
        while(high<fruits.size()){
            mpp[fruits[high]]++;
            while(mpp.size()>2){
                mpp[fruits[low]]--;
                
                if(mpp[fruits[low]]==0)
                mpp.erase(fruits[low]);
                low++;
            }
            
                res= max(res , high-low+1);
            
            high++;

        }
        return res;
    }
};