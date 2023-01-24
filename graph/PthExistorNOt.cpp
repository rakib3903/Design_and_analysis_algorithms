
https://leetcode.com/problems/find-if-path-exists-in-graph/
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>vec[n];
        for(int i = 0; i <edges.size();i++){
            int x = edges[i][0];
            int y = edges[i][1];
            vec[x].push_back(y);
            vec[y].push_back(x);
        }
        vector<int>vis(n, 0);
        queue<int>q;
        q.push(source);
        vis[source] = 1;
        while(!q.empty()){
            int data = q.front();
            q.pop();
            if(data == destination){
                return true;
            }
            for(auto i: vec[data]){
                if(vis[i] == 0){
                    vis[i] = 1;
                    q.push(i);
                }
            }
        }
        return false;
    }
};
