// User function template for C++

class Solution {
  public:
    //optimal approach
    int paintercnt(vector<int>&arr, int time){
        int n=arr.size();
        int painters=1;
        long long boardpainters=0;
        for (int i=0;i<n;i++){
            if (boardpainters + arr[i]<=time){
                boardpainters+=arr[i];
            } else {
                painters++;
                boardpainters=arr[i];
            }
        }
        return painters;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int low= *max_element(arr.begin(), arr.end());
        int high= accumulate(arr.begin(), arr.end(), 0);
        while (low<=high){
            int mid=(low+high)/2;
            int painters=paintercnt(arr,mid);
            if (painters>k) low=mid+1;
            else high=mid-1;
        }
        return low;
        // return minimum time
    }
};