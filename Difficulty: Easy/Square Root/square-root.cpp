// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        //brute force (linear search)
        int ans=0;
        for (long long i=0;i<=n;i++){
            long long val=i*i;
            if (val<=n*1ll){
                ans=i;
            } else {
                break;
            }
        }
        return ans;
    }
};