class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ssv;
        int n=nums.size();
        vector<int> v;
        ss(nums,0,ssv,v);
        return ssv;

    }
    void ss(const vector<int>&nums,int i,vector<vector<int>> &ssv,vector<int> &v){
        if(i>=nums.size()){
            ssv.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        ss(nums,i+1,ssv,v);
        v.pop_back();
        ss(nums,i+1,ssv,v);
    }
};
