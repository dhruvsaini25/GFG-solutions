// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        //brute force
        int n=arr.size();
        int ans=INT_MAX;
        int index=-1;
        for (int i=0;i<n;i++){
            if (arr[i]<ans){
                ans=arr[i];
                index=i;
            }
        }
        return index;
    }
};
