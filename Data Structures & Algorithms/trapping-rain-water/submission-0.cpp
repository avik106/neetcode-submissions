class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> premx(n);
        vector<int> sufmx(n);
        premx[0]=height[0];
        sufmx[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            premx[i]=max(premx[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--){
            sufmx[i]=max(sufmx[i+1],height[i]);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(premx[i],sufmx[i])-height[i];
        }
        return ans;
    }
};
