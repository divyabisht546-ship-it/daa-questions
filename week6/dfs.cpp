#include <iostream>
#include <vector>
#include <bits/stdc++.h> // Saare standard functions ke liye

using namespace std;

// DFS function: Boolean return karega agar rasta mil gaya
bool dfs(int node, int dest, vector<vector<int>> &adj, vector<bool> &visited) {
    // 1. Current node ko visited mark karo
    visited[node] = true;

    // 2. Base Case: Agar destination mil gayi
    if (node == dest)
        return true;

    // 3. Padosi (Neighbors) ko explore karo
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            if (dfs(neighbor, dest, adj, visited))
                return true;
        }
    }

    return false;
}

int main() {
    int V, E;
    
    // Fast I/O (Optional par competitive programming mein kaam aata hai)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> V >> E)) return 0; // Input check

    vector<vector<int>> adj(V);

    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;

        // Undirected graph ke liye dono taraf edge jodo
        // Agar question mein 'Directed' bola ho toh sirf ek side jodhna
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int src, dest;
    cin >> src >> dest;

    vector<bool> visited(V, false);

    // Function call aur Exact Output Format
    if (dfs(src, dest, adj, visited))
        cout << "Yes Path Exists" << endl;
    else
        cout << "No Such Path Exists" << endl;

    return 0;
}
