class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>a(n);
        a[0]=1;
int p1=0;
int p2=0;
int p3=0;
        for(int i=1 ; i<n ; i++){
            a[i]= min({2*a[p1] ,3*a[p2] , 5*a[p3]});
            if(a[i]==2*a[p1]) p1++;
           if(a[i]==3*a[p2])p2++;
            if(a[i]==5*a[p3])p3++;
        }
        return a[n-1];
    }
};