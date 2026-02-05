class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,vector<int>> adjacency_list;
        for(vector<int> edge: edges){
            int u = edge[0];
            int v = edge[1];
            adjacency_list[u].push_back(v);
            adjacency_list[v].push_back(u);
        }
        set<int> visited;
        dfs(adjacency_list,source,visited);
        if(visited.find(destination) != visited.end()) return true;
        return false;
    }
    void dfs(unordered_map<int,vector<int>> &adjacency_list, int source, set<int>&visited){
        visited.insert(source);
        for(int x: adjacency_list[source]){
            if(visited.find(x) == visited.end())
            dfs(adjacency_list,x,visited);
        }
    }
};