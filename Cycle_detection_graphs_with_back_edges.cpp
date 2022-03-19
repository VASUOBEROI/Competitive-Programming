#include<bits/stdc++.h>
using namespace std;


// Back-Edge : An edge that points from one node to its ancestors
// It is directly related to Cycle (back edge points to already visited node)
// Back-edge means there is a Cyle in graph
// Dfs-tree is just a tree formed after removing back-edges

const int N = 2e5 + 11;
vector<vector<int>> adj(N);
vector<int> vis(N);
vector<int> parent(N);

void dfs(int node, int par)
{
	parent[node] = par;
	vis[node] = 1;
// it means node is visited and is in call stack

	for (auto nbr : adj[node])
	{
		if (vis[nbr] == 0)
		{
			dfs(nbr, node);
		}
		// nbr is not parent and it is in call stack
		// means nbr is ancestor so back-edge
		else if (nbr != par && vis[nbr] == 1)
		{
			int ancester = nbr;
			cout << "Back_edge : cycle is found" << "\n";
			// Priting Cycle
			while (node != ancester)
			{
				cout << node << "-->";
				node = parent[node];
			}




			return;
		}
	}
	vis[node] = 2;
// node is visited and is not in call stack

}





int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for (int i = 1; i <= n; ++i)
	{
		if (!vis[i])
		{
			dfs(i, 0);
		}
	}
	return 0;
}


