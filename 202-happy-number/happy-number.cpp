class Solution {
public:
int sumofsq(int n ){
    int sum=0;
    while(n>0){
        int last = n%10;
        n=n/10;
        sum += last*last;

    }
    return sum;
}
    bool isHappy(int n) {
        int slow =n;
       int fast= n;

       while(fast!=1){
        slow =sumofsq(slow);
        fast = sumofsq(fast);
        fast =sumofsq(fast);

        if(slow==fast && slow!=1)return false;
       }
       return true;
    }
};