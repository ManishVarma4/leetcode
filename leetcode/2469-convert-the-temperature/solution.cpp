class Solution {
public:
    vector<double> convertTemperature(double cel) {
        vector<double> ans(2);
        ans[0]=cel+273.15;
        ans[1]=cel*1.80 +32.00;
        return ans;
    }
};