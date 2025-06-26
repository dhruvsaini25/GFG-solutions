class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        int n=s.length();
        int cnt=0;
        unordered_map<char,int> mpp;
        int j=0;
        for (int i=0;i<n;i++){
            mpp[s[i]]++;
            while (mpp['a']>0 && mpp['b']>0 && mpp['c']>0){
                cnt+=(n-i);
                mpp[s[j]]--;
                j++;
            }
        }
        return cnt;
    }
};