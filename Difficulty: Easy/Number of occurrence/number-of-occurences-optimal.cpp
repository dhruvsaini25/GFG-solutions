//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    //optimal approach
    int firstoccurrence(vector<int>&arr, int target){
        int n=arr.size();
        int low=0; 
        int high=n-1;
        int first=-1;
        while (low<=high){
            int mid=(low+high)/2;
            if (arr[mid]==target){
                first=mid;
                high=mid-1;
            } else if (arr[mid]<target){
                low=mid+1;
            } else {
                high=mid-1;
            }
        }
        return first;
    }
    int lastoccurrence(vector<int>&arr, int target){
        int n=arr.size();
        int low=0; 
        int high=n-1;
        int last=-1;
        while (low<=high){
            int mid=(low+high)/2;
            if (arr[mid]==target){
                last=mid;
                low=mid+1;
            } else if (arr[mid]<target){
                low=mid+1;
            } else {
                high=mid-1;
            }
        }
        return last;
    }
    int countFreq(vector<int>& arr, int target) {
        //optimal approach
        int n=arr.size();
        int first=firstoccurrence(arr,target);
        if (first==-1) return 0;
        int last=lastoccurrence(arr, target);
        return last-first+1;
    }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends