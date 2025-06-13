// User function template for C++

class Solution {
  public:
    int upperbound(vector<int>&arr, int x){
        int n=arr.size();
        int low=0, high=n-1;
        int ans=n;
        while (low<=high){
            int mid=(low+high)/2;
            if (arr[mid]>x){
                ans=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return ans;
    }
    int cntsmallequal(vector<vector<int>> &matrix, int n, int m, int x){
        int cnt=0;
        for (int i=0;i<n;i++){
            cnt+=upperbound(matrix[i],x);
        }
        return cnt;
    }
    int median(vector<vector<int>> &mat) {
        //better approach
        int n=mat.size();
        int m=mat[0].size();
        int low=INT_MAX, high=INT_MIN;
        for (int i=0;i<n;i++){
            low=min(low,mat[i][0]);
            high=max(high,mat[i][m-1]);
            int req=(n*m)/2;
            while (low<=high){
                int mid=(low+high)/2;
                int smallequal=cntsmallequal(mat,n,m,mid);
                if (smallequal<=req) low=mid+1;
                else high=mid-1;

            }
        }
        return low;
    }
};
