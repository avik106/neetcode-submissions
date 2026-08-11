class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(const auto s:strs){
            string ss=s;
            sort(ss.begin(),ss.end());
            m[ss].push_back(s);
        }
        vector<vector<string>> res;
        for(auto pair:m){
            res.push_back(pair.second);
        }
        return res;
    }
};
