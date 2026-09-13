class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n = img1.size();
        vector<pair<int, int>> p1, p2;
        
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(img1[i][j]) p1.push_back({i, j});
                if(img2[i][j]) p2.push_back({i, j});
            }
        }
        
        unordered_map<long long, int> mp;
        int ans = 0;
        
        for(auto &x : p1) {
            for(auto &y : p2) {
                long long shift = (y.first - x.first + 100) * 1000 + (y.second - x.second + 100);
                mp[shift]++;
                ans = max(ans, mp[shift]);
            }
        }
        
        return ans;
    }
};