class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<bool> vis(n,false);
        for(auto e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
         int res=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(adj,vis,i);
                res++;
            }
        }
        return res;
    }
    void dfs(vector<vector<int>>& adj,vector<bool> &vis,int node){
        vis[node]=true;
        for(int i:adj[node]){
            if(!vis[i]){
                dfs(adj,vis,i);
            }
        }
    }
};
