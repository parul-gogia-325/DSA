class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int i=0, j=0;
        vector<int>maxi(arr.size());
        maxi[0]= arr[0];
        for(int i=1 ; i< arr.size() ; i++){
            maxi[i]=max(maxi[i-1] , arr[i]);
        }
int chunks=0;
        for(int i=0 ;i<arr.size() ; i++){
            if(maxi[i]==i){
                chunks++;
            }
        }
        return chunks;

    }
};