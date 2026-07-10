class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> v;
        subs(nums,0,res,v);
        return res;
    }
    void subs(const vector<int>& nums,int i,vector<vector<int>> &res,vector<int> &v){
        if(i==nums.size()){
            res.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        subs(nums,i+1,res,v);
        v.pop_back();
        while(i+1<nums.size() && nums[i]==nums[i+1]){
            i++;
        }
        subs(nums,i+1,res,v);
    }
};
