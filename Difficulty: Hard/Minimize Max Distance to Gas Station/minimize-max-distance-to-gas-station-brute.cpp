class Solution {
  public:
    double findSmallestMaxDist(vector<int> &stations, int k) {
        int n = stations.size();
        vector<int> stationcnt(n - 1, 0);

        for (int i = 0; i < k; i++) {
            long double maxsection = -1;
            int maxind = -1;
            for (int j = 0; j < n - 1; j++) {
                long double diff = stations[j + 1] - stations[j];
                long double length = diff / (long double)(stationcnt[j] + 1);
                if (length > maxsection) {
                    maxsection = length;
                    maxind = j;
                }
            }
            stationcnt[maxind]++;
        }

        long double maxans = -1;
        for (int i = 0; i < n - 1; i++) {
            long double diff = stations[i + 1] - stations[i];
            long double length = diff / (long double)(stationcnt[i] + 1);
            maxans = max(maxans, length);
        }

        return maxans;
    }
};
