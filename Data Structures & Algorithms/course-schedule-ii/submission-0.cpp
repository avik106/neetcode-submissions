class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> indegree(numCourses,0);
        vector<vector<int>> adj(numCourses);
        for(auto& pre:prerequisites){
            indegree[pre[1]]++;
            adj[pre[0]].push_back(pre[1]);
        }
        int res=0;
        vector<int> ans(numCourses);
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans[numCourses-res-1]=node;
            res++;
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        if(res!=numCourses){
            return {};
        }
        return ans;
    }
};
