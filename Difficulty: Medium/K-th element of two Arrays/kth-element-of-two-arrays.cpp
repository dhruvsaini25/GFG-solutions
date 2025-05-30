class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        //brute force
        int n=a.size();
        int m=b.size();
        vector<int> c;
        int i=0; int j=0;
        while (i<n && j<m){
            if (a[i]<b[j]) c.push_back(a[i++]);
            else c.push_back(b[j++]);
        }
        while (i<n) c.push_back(a[i++]);
        while (j<m) c.push_back(b[j++]);
        return c[k-1];
    }
};