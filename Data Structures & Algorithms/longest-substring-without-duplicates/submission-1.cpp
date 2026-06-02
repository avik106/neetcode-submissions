class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        unordered_map<char,bool> m;
        for(char c:s){
            m[c]=false;
        }
        int l=0;
        int r=0;
        while(r<s.length() && l<s.length()){
            if(m.count(s[r])&& m[s[r]]){
                m[s[l]]=false;
                l++;
            }
            else{
                 len=max(len,r-l+1);
                m[s[r]]=true;
                r++;
            }
        }
        return len;
    }
};
