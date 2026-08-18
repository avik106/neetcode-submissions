class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int n=nums.size(); 
       int curmx=1;
       int curmn=1;
       int res=nums[0];
       for(int i:nums){
        int temp=curmx*i;
        curmx=max(max(i*curmn,i*curmx),i);
        curmn=min(min(temp,curmn*i),i);
        res=max(res,curmx);
       }
       return res;
    }
};
