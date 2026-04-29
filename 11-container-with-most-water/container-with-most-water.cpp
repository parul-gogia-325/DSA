class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxarea=-1;
        while(left<right){
            int currarea = min(height[left]*(right-left) , height[right]*(right-left));
            maxarea= max(currarea , maxarea);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxarea;
    }
};