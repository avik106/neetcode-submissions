class Solution {
    int dirn[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    res=max(res,dfs(grid,i,j));
                }
            }
        }
        return res;
    }
    int dfs(vector<vector<int>>& grid,int r,int c){
        if(r<0||r>=grid.size()||c<0||c>=grid[0].size()||grid[r][c]==0){
            return 0;
        }
        grid[r][c]=0;
        int ans=1;
        for(int i=0;i<4;i++){
            ans+=dfs(grid,r+dirn[i][0],c+dirn[i][1]);
        }

        return ans;
    }
};
