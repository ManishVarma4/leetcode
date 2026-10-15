class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        set<char> hor,cub;
        vector<set<char>> st(9);
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                char ch=a[i][j];
                if(ch!='.'){
                    if(hor.find(ch)!=hor.end()) return 0;
                    hor.insert(ch);
                    if(st[j].find(ch)!=st[j].end()) return 0;
                    st[j].insert(ch);
                }
            }
            hor.clear();            
        }
        for(int i=0;i<a.size();i+=3){
            for(int j=0;j<a.size();j+=3){
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        char ch=a[k][l];
                        if(ch != '.'){
                            if(cub.find(ch) != cub.end()) return 0;
                            cub.insert(ch);
                        }
                    }
                }
                cub.clear();
            }
        }
        return 1;
    }
};