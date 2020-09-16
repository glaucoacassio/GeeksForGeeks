#include <bits/stdc++.h>

using namespace std;

void bfs(int s, vector<int> g[], vector<bool> &vis, int N);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        vector<bool> vis(N, false);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        bfs(0, adj, vis, N);
        cout << endl;
    }
}


/* You have to complete this function*/

/* Function to do BFS of graph
*  adj[]: array of vectors
*  vis[]: array to keep track of visited nodes
*/
void bfs(int s, vector<int> g[], vector<bool> &vis, int N) {
    vis[s] = true;//marco como visitado esse vertice
    
    queue<int> q;
    q.push(s);//insiro na fila
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<< u <<" ";
        for(auto v : g[u])
        {
            if(!vis[v])
            {
                vis[v]=true;
                q.push(v);
            }
        }
    }
    
}
