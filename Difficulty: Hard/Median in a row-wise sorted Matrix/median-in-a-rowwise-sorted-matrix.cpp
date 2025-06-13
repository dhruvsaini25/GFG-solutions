// User function template for C++

class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        //brute force
        int n=mat.size();
        int m=mat[0].size();
        vector<int>extra;
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                extra.push_back(mat[i][j]);
            }
        }
        sort(extra.begin(), extra.end());
        return extra[(n*m)/2];
    }
};
