class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n= nums.size();
        for(int i=0;i<n;i++){
         m[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
         int diff=target-nums[i];
         if(m.count(diff)&& m[diff]!=i){
            return{i,m[diff]};
        }}
        return {};
    }
};
