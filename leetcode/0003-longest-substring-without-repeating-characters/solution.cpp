class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int l=0,r=0;
        int ans=0;
        while(r<s.size()){
            if(st.find(s[r]) ==st.end()){
                st.insert(s[r]);
                r++;
                ans=max(ans,(int)st.size());
            }
            else{
                st.erase(s[l]);
                l++;
            }
        }
        return ans;
    }
};