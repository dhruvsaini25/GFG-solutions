// User function template for C++
class Solution {
  public:
    int lowerbound(vector<int>&row, int m, int k){
        int low=0;
        int high=m-1;
        int ans=m;
        while (low<=high){
            int mid=(low+high)/2;
            if (row[mid]>=k){
                ans=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return ans;
    }
    int rowWithMax1s(vector<vector<int>> &arr) {
        //optimal approach
        int n=arr.size();
        int m=arr[0].size();
        int cnt=0;
        int index=-1;
        for (int i=0;i<n;i++){
            int cnt_ones=m-lowerbound(arr[i], m,1);
            if (cnt_ones>cnt){
                cnt=cnt_ones;
                index=i;
            }
        }
        return index;
    }
};