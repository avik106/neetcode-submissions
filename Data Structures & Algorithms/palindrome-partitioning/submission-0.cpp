class Solution {
public:

    bool pldn(string s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> par;
        vector<string> vs;
        pp(s,par,vs,0);
        return par;
    }
    
    void pp(string s,vector<vector<string>> &par,vector<string> &vs,int i){
        if(i>=s.length()){
            par.push_back(vs);
            return;
        }
        for(int j=i;j<s.length();j++){
            if(pldn(s,i,j)){
                vs.push_back(s.substr(i,j-i+1));
                pp(s,par,vs,j+1);
                vs.pop_back();
            }
        }
    }
};
