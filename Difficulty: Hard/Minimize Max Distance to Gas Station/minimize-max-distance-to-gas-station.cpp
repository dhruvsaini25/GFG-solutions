class Solution {
  public:
    int numberofgasstation(vector<int>&stations, long double dist){
        //optimal approach
        int n=stations.size();
        int cnt=0;
        for (int i=1;i<n;i++){
            long double segmentLength=stations[i]-stations[i-1];
            cnt+=floor(segmentLength/dist);
        }
        return cnt;
    }
    double findSmallestMaxDist(vector<int> &stations, int k) {
        // Code here
        int n=stations.size();
        long double low=0;
        long double high=0;
        for (int i=0;i<n-1;i++){
            high=max(high,(long double)(stations[i]-stations[i-1]));
        }
        long double diff=1e-6;
        while ((high-low)>diff){
            long double mid=(low+high)/2;
            int cnt=numberofgasstation(stations,mid);
            if (cnt>k) low=mid;
            else high=mid;
        }
        return (double)high;
        
    }
};