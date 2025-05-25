// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        //optimal approach using BINARY SEARCH
        int low=1;
        int high=n;
        while (low<=high){
            long long mid=(low+high)/2;
            long long val=mid*mid;
            if (val<= (long long)(n)){
                low=mid+1;
            } else {
                high=mid-1;
            }
        }
        return high;
    }
};