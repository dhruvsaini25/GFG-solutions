//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        //optimal approach
        long long n=arr.size();
        long long Sn=(n*(n+1))/2;
        long long S2n=(n*(n+1)* (2*n+1))/6;
        long long S=0, S2=0;
        //calculating S and S2
        for (int i=0;i<n;i++){
            S+=arr[i];
            S2+=(long long)arr[i]*(long long)arr[i];
        }
        //calcultaing S-Sn=X-Y & S2-S2n=X^2-Y^2
        long long val1=S-Sn;
        long long val2=S2-S2n;
        //X+Y=(x^2-Y^2)/(X-Y)
        val2=val2/val1;
        long long x=(val1+val2)/2;
        long long y=x-val1;
        return {(int)x, (int)y};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends