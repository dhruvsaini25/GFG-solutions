//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isPrime(int n) {
        int count=0;
        if (n<=1) return false;
        if (n==2 || n==3) return true;
        if (n%2==0 || n%3==0) return false;
        for (int i=5; i*i<=n; i+= 6) {
            if (n%i==0 || n%(i+2)==0) return false;
        }
        return true;
        
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << (ob.isPrime(N) ? "true" : "false") << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends