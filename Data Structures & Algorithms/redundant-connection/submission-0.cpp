class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<vector<int>> adj(n+1);
        vector<int> indegree(n+1);
        for(auto e:edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
            indegree[e[0]]++;
            indegree[e[1]]++;
        }
        queue<int> q;
        for(int i=1;i<=n;i++){
            if(indegree[i]==1)q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            indegree[node]--;
            for(int i:adj[node]){
                indegree[i]--;
                if(indegree[i]==1)q.push(i);
            }
        }
        for(int i=n-1;i>=0;i--){
            if(indegree[edges[i][0]]==2&&indegree[edges[i][1]]){
                return{edges[i][0],edges[i][1]};
            }
        }
        return {};
    }
};
