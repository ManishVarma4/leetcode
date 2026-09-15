class Solution {
public:
    int reverse(int x) {
       string s= to_string(x);
       if(s[0]=='-') std::reverse(s.begin()+1,s.end());
       else std::reverse(s.begin(),s.end());
       long int n= stol(s);
       if(n<INT_MIN || n>INT_MAX) return 0;
       return n;
    }
};