//https://www.interviewbit.com/problems/connected-components
void bfs(int start, vector<int>graph[], vector<int>& visited){
    queue<int>q;
    q.push(start);
    visited[start] = 1;
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(auto i : graph[p]){
            if(visited[i] == 0){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}
int Solution::solve(int n, vector<vector<int> > &b) {
    vector<int> graph[n];
    int edges = b.size();
    for(int i = 0; i < edges; i++){
        graph[b[i][0]-1].push_back(b[i][1]-1);
        graph[b[i][1]-1].push_back(b[i][0]-1);
    }
     vector<int>visited(n, 0);
     int cnt = 0;
     for(int i = 0; i<n; i++){
         if(visited[i] == 0){
             cnt++;
              bfs(i, graph, visited);
         }
     }
     return cnt;
}


