class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        int n=s.length();
        int cnt=0;
        for (int i=0;i<n;i++){
            bool hasA=false, hasB=false, hasC=false;
            for (int j=i;j<n;j++){
                if (s[j]=='a') hasA=true;
                else if (s[j]=='b') hasB=true;
                else if (s[j]=='c') hasC=true;
                if (hasA && hasB && hasC) cnt++;
            }
        }
        return cnt;
    }
};