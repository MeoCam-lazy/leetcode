class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(n <= 1) return true;
        unordered_map<int,vector<int>> graph;
        for(auto edge: edges){
            int u = edge[0];
            int v = edge[1];
            graph[v].push_back(u);
            graph[u].push_back(v);
        }
        unordered_set<int> visited;
        return findPath(source,destination,graph,visited);
    }
    bool findPath(int current, int destination, unordered_map<int, vector<int>>& graph, unordered_set<int>& visited) {
        visited.insert(current);
        for (int neighbor : graph[current]) {
            if (neighbor == destination) return true;
            if (visited.find(neighbor) == visited.end()) {
                if (findPath(neighbor, destination, graph, visited)) {
                    return true;
                }
            }
        }
        return false;
    }
};