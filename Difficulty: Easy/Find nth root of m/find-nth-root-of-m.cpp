class Solution {
  public:
    long long func(int b, int exp) {
        // Code here.
        //brute force
        long long ans=1;
        long long base=b;
        while (exp>0){
            if (exp%2){
                exp--;
                ans=ans*base;
            } else {
                exp /=2;
                base=base*base;
            }
        }
        return ans;
    }
    int nthRoot(int n, int m) {
        for (int i=0;i<=m;i++){
            long long val=func(i,n);
            if (val==m*1ll) return i;
            else if (val >m*1ll) break;
        } return -1;
    }
};