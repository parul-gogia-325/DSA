class Solution {
public:
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
       
        int maxC1=INT_MIN;
        int minC1 = INT_MAX;

        int maxC2=INT_MIN;
        int minC2 = INT_MAX;

        int maxC3=INT_MIN;
        int minC3 = INT_MAX;

        int maxC4=INT_MIN;
        int minC4 = INT_MAX;
        int a=0;
        int b=0;

        for(int i=0 ; i<arr1.size() ; i++){

            //case1:
            maxC1 = max((arr1[a] +arr2[a]+ a) , maxC1);
            minC1 = min((arr1[b] +arr2[b] +b) , minC1);

            //Case2:
            maxC2 = max((arr1[b] -arr2[b] - b)  , maxC2);
            minC2 = min((arr1[a] - arr2[a] - a) , minC2);

            //case3:
            maxC3 = max((arr1[a] - arr2[a] +a ) , maxC3);
            minC3 = min((arr1[b] - arr2[b] +b) , minC3);

            //case4:

            maxC4= max((arr1[b] +arr2[b] - b) ,maxC4);
            minC4= min((arr1[a] +arr2[a] - a ), minC4);

            a++;
            b++;

        }

        int fmax= max({
            maxC1-minC1 , 
            maxC2-minC2, 
            maxC3-minC3 ,
             maxC4-minC4
    });
        return fmax;
        

    }
};