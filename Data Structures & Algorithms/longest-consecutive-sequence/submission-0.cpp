class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> s(nums.begin(),nums.end());
       int ans=0;
       for(int n:nums){
        if(s.find(n-1)==s.end()){
            int l=1;
        
        while(s.find(n+l)!=s.end()){
            l++;
        }
        ans=max(ans,l);
        }
       } 
       return ans;
    }
};
