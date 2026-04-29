class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==1||c==0)return true;
        int i=0;
        long long j=sqrt(c);
        while(i<=j){
            long long a= pow(i , 2) +pow(j , 2) ;
            if(a==c){
                return true;
            }
            else if(a>c){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};