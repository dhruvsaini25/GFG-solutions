// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        //brute force
        int n=arr.size();
        int m=arr[0].size();
        int cnt=0;
        int index=-1;
        for (int i=0;i<n;i++){
            int cnt_ones=0;
            for (int j=0;j<m;j++){
                cnt_ones+=arr[i][j];
            }
            if (cnt_ones>cnt) {
                cnt=cnt_ones;
                index=i;
            }
        }
        return index;
    }
};