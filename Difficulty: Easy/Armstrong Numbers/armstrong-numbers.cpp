//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum = 0, x = n;

        while (n > 0) {
            int digit = n % 10;

            if (sum > (INT_MAX - digit) / 10) return false; 

            sum = sum + (digit*digit*digit);
            n /= 10;
        }

        return sum == x;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        bool flag = ob.armstrongNumber(n);
        if (flag) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends