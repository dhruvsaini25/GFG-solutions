//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%lf ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        cout<<setprecision(3)<<fixed;
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends


class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        double area;
        switch (choice){
            case 1:
                if (arr.size()==1){
                    area=M_PI*arr[0]*arr[0];
                }
                break;
            case 2:
                if (arr.size()==2){
                    area=arr[0]*arr[1];
                }
                break;
        }
        return area;
    }
};
int main1(){
    int choice;
    vector <double>arr;
    cout <<"enter the choice:";
    cin>> choice;
    if (choice==1){
        double R;
        cout<<"enter the radius";
        cin>>R;
        arr.push_back(R);
    }
    else if (choice==2){
        double L,B;
        cout<<"enter length and breadth";
        cin>>L>>B;
        arr.push_back(L);
        arr.push_back(B);
    }
    else {
        cout<<"invalid choice";
        return 0;
    }
    Solution obj;
    double result=obj.switchCase(choice,arr);
    if (result!=-1){
        cout<<"Area:"<<result<<endl;
    }
    else{
        cout<<"invalid input"<<endl;
    }
    return 0;
}


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int choice;
        scanf("%d",&choice);
        
        
        vector<double> arr(choice);
        Array::input(arr,choice);
        
        Solution obj;
        double res = obj.switchCase(choice, arr);
        // cout<<fixed<<endl;
        if(res == int(res)){
            cout<<int(res)<<endl;
            continue;
        }
        cout<<setprecision(2)<<fixed;
        // 
        // }else{
            cout<<res<<endl;
        // }
        
    }
}

// } Driver Code Ends