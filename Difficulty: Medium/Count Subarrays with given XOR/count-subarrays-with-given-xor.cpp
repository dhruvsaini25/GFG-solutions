//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        //optimal approach
        
        int cnt=0;
        int n=arr.size();
        map<int,int> mpp;
        int xr=0;
        mpp[xr]++;
        for (int i=0;i<n;i++){
            xr=xr^arr[i];
            int x=xr^k;
            cnt+=mpp[x];
            mpp[xr]++;
        }
        
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (tc-- > 0) {
        string input;
        getline(cin, input); // Read the whole line for the array

        stringstream ss(input);
        vector<int> arr;
        int num;

        while (ss >> num) {
            arr.push_back(num); // Push numbers into the vector
        }

        int k;
        cin >> k;
        cin.ignore(); // Ignore the newline after k

        Solution obj;
        cout << obj.subarrayXor(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends