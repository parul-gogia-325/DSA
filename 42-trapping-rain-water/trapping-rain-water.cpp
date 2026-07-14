class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int LB[height.size()];
        int Rb[height.size()];
LB[0]= height[0];
Rb[n-1]=height[n-1];

        for(int i=1; i<n ; i++){
            int ele = max(height[i] , LB[i-1]);
            LB[i]=ele;
        }

        for(int i=n-2 ; i>=0 ; i--){
            int ele= max(height[i] , Rb[i+1]);
            Rb[i]=ele;
        }
        int i=0;
int waterC=0;
        while(i<n){
            int Curr = min(Rb[i] , LB[i]) -height[i];

            if(Curr>0){
                waterC+=Curr;
            }

            i++;

        }
        return waterC;
    }
};