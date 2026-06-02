class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[j]+nums[k]>-nums[i]){
                    k--;   
                }
                else if(nums[j]+nums[k]<-nums[i]){
                    j++;
                }
                else{
                    ans.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};
