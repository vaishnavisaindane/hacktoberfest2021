#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	void dfs(vector<int> adj[], int src, bool visited[], stack<int> &s){
	    visited[src] = true;
	    for(int x:adj[src]){
	        if(!visited[x]){
	            dfs(adj,x,visited,s);
	        }
	    }
	    s.push(src);
	    
	}
	vector<int> topoSort(int V, vector<int> adj[]) {
	     vector<int> topological_order;
	     stack<int> s;
	     bool visited[V] = {false};
	     for(int i=0;i<V;i++){
	         if(!visited[i]){
	             dfs(adj,i,visited,s);
	         }
	     }
	     while(!s.empty()){
	         int u = s.top();
	         s.pop();
	         topological_order.push_back(u);
	     }
	     return topological_order;
	}
};



/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}  
