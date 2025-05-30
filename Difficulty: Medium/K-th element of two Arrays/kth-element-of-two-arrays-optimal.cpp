class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
        // code here
        //optimal approach using BINARY SEARCH
        int n=a.size();
        int m=b.size();
        int i=0; int j=0;
        if (n>m) return kthElement(b, a, k);
        int left=k;
        int low=max(0,k-m), high=min(k,n);
        while (low<=high){
          int mid1=(low+high)>>1;
          int mid2=left-mid1;
          int l1=INT_MIN, l2=INT_MIN;
          int r1=INT_MAX, r2=INT_MAX;
          if (mid1<m) r1=a[mid1];
          if (mid2<n) r2=b[mid2];
          if (mid1-1>=0) l1=a[mid1-1];
          if (mid2-1>=0) l2=b[mid2-1];
          if (l1<=r2 && l2<=r1) {
            return max(l1, l2);
          }
          else if (l1>r2) high=mid1-1;
          else low=mid1+1;
        }
        return 0;
    }
};