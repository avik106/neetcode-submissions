class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> cs;
        vector<int> v;
        sumc(nums,0,target,0,cs,v);
        return cs;
    }
    void sumc(const vector<int>& nums,int sum,const int target,int i,vector<vector<int>> &cs,vector<int> &v){
        if(sum==target){
            cs.push_back(v);
            return;
        }
        if(sum>target||i>=nums.size()){
            return;
        }
        v.push_back(nums[i]);
        sumc(nums,sum+nums[i],target,i,cs,v);

        v.pop_back();
        sumc(nums,sum,target,i+1,cs,v);
    }
};
