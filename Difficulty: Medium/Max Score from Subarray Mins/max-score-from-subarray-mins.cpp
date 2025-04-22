//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
    public:
      // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
          //most optimal
          //we also compare the adjacent two biggest
          //and the then find smallest and 2nd smallest
          //and those two's sum would yield max sum
        int maxSum=0;
        int n=arr.size();
        for (int i=0;i<n-1;i++) {
            int small=min(arr[i], arr[i+1]);
            int secondSmall=max(arr[i],arr[i+1]);
            int score=small+secondSmall;
            maxSum=max(maxSum, score);
        }
        return maxSum;
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends