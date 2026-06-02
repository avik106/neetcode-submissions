class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for(auto & s:strs){
            encoded_string+=to_string(s.size());
            encoded_string+=" ";
            encoded_string+=s;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string>ans;
        int i=0;
        while(i<s.size()){
            int j=i;
            while(s[j]!=' '){
                j++;
            }
            int len=stoi(s.substr(i, j - i));
            i=j+1;
            ans.push_back(s.substr(i,len));
            i+=len;
        }
        return ans;

    }
};