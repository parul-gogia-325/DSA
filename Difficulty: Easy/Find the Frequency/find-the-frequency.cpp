/*Function to find frequency of x
 * x : element whose frequency is to be found
 * arr : input vector
 */
class Solution {
  public:
    int findFrequency(vector<int> arr, int x) {
        // Your code here
        map<int , int >mpp;
        for(int i=0 ; i<arr.size() ; i++){
            mpp[arr[i]]++;
        }
        return mpp[x];
    }
};