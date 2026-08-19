class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
      int n=s.size();
      vector<bool> dp(n+1,false);
      dp[n]=true;
      for(int i=n-1;i>=0;i--){
        for(int j=0;j<wordDict.size();j++){
            if((i+wordDict[j].length())<=s.size()&&s.substr(i,wordDict[j].length())==wordDict[j]){
                dp[i]=dp[i+wordDict[j].length()];
            }
            if(dp[i])break;
        }

      }
      return dp[0];
    }
};
