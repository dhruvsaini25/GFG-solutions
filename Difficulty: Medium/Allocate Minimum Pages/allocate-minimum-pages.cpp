class Solution {
  public:
    int countstudents(vector<int>&arr, int pages){
        //optimal approach
        int n=arr.size();
        int students=1;
        long long pagesstudent=0;
        for (int i=0;i<n;i++){
            if (pagesstudent+arr[i]<=pages){
                pagesstudent+=arr[i];
            } else {
                students++;
                pagesstudent=arr[i];
            }
        }
        return students;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        if (k>n) return -1;
        int low=*max_element(arr.begin(), arr.end());
        int high=accumulate(arr.begin(), arr.end(), 0);
        while (low<=high){
            int mid=(low+high)/2;
            int students=countstudents(arr,mid);
            if (students>k) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};