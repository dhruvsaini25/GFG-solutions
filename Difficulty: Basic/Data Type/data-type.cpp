//{ Driver Code Starts
// Initial Template for C++

// {Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    int dataTypeSize(string& type) {
        if (type=="Character")
            return sizeof(char);
        else if (type=="Integer")
            return sizeof(int);
        else if (type=="Short")
            return sizeof(short);
        else if (type=="Long")
            return sizeof(long);
        else if (type=="Long Long")
            return sizeof(long long);
        else if (type=="Float")
            return sizeof(float);
        else if (type=="Double")
            return sizeof(double);
        else if (type=="Bool")
            return sizeof(bool);
        else if (type=="Long Double")
            return sizeof(long double);
        else return -1;
    }
    int main(){
        string inputType;
        cout<<"enter the data type: ";
        getline(cin, inputType);
        int size= dataTypeSize(inputType);
        if (size!=-1){
            cout<<"size of"<< inputType<< "is"<<size<<"bytes"<<endl;
            
        } else{
            cout<<"invalid data type."<<endl;
        }
        return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends