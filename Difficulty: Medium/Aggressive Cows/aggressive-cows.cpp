// User function Template for C++

class Solution {
  public:
    bool placecow(vector<int>&stalls, int dist, int cows){
        int n=stalls.size();
        int cntcows=1;
        int last=stalls[0];
        for (int i=0;i<n;i++){
            if (stalls[i]-last>=dist){
                cntcows++;
                last=stalls[i];
            }
            if (cntcows>=cows) return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        //brute force
        int n=stalls.size();
        sort(stalls.begin(), stalls.end());
        int limit=stalls[n-1]-stalls[0];
        for (int i=1;i<=limit;i++){
            if (placecow(stalls,i,k)==false){
                return (i-1);
            }
        }
        return limit;
    }
};