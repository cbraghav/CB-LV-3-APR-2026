#include <bits/stdc++.h>
using namespace std;


// void dijkstra() {
// 		// adj list
// 	int n = 0;
// 	vector<vector<pair<int,int>>> adj_list; // { 0}  -> { node1, edge_wt1} {node2, edge_Wt2}
// 	vector<int> dis(n); // shortest path from src to i -> for every i (0 to n)
// 	int src = 0;

// 	set<pair<int,int>> st; // node, dis
// 	set.insert({src,0});
// 	dis[src] = 0;

// 	while(st.size()> 0){
// 		int node = *st.begin().first;
// 		int dis_node  = *st.begin().second;
// 		st.erase(*st.begin());

// 		for(auto it : adj_list[node]){

// 			int neig = it.first;
// 			int edge_wt = it.scond;

// 			if(dis_node + edge_wt < dis[neig]){
// 				// dis[]
// 				st.erase({neig, dis[neig]});
// 				st.insert(neig, dis_node + edge_wt);
// 				dis[neig] = dis_node + edge_wt;
// 			}
// 		}
// 	}


// 	// print dis

// }

// dfs ( undirected graph)
bool checkCycle(int n, vector<vector<int>> & adj_list, vector<int>&vis, int node, int parent) {

	for (auto neig : adj_list[node]) {
		if (vis[neig] == 0) {
			vis[neig] = 1;
			if (checkCycle(n, adj_list, vis, neig, node)) {
				return true;
			}
		} else {
			if (neig != parent) {
				return true;
			}
		}
	}
	return false;

}


// // dfs ( directed graph)
// bool checkCycle(int n, vector<vector<int>> & adj_list, vector<int>&vis, vector<int>&tempvis, int node) {


// 	vis[node] = 1;
// 	tempvis[node] = 1;

// 	for (auto neig : adj_list[node]) {
// 		if (vis[neig] == 0) {
// 			if (checkCycle(n, adj_list, vis, tempvis, neig)) {
// 				return true;
// 			}
// 		} else { // vis[neig] == 1
// 			if (tempvis[neig] == 1) {
// 				return true;
// 			}
// 		}
// 	}

// 	tempvis[node] = 0;
// 	return false;

// }

// void isCycle(int n , vector<vector<int>> & adj_list) {

// 	std::vector<int> visted(n , 0);
// 	vector<int> tempvis(n, 0);
// 	for (int i = 0 ; i < n; i++) {
// 		if (vis[i] == 0) {
// 			if (checkCycle(n , adj_list , vis, i, -1)) {
// 				return true;
// 			}
// 		}
// 	}

// 	return false;
// }



// // topo sort
// void dfs(int node, vector<vector<int>>&adj_list , vector<int>& vis, stack<int>&st) {

// 	vis[node] = 1;
// 	for (auto neig : adj_list[node]) {
// 		if (vis[neig] == 0) {
// 			dfs(neig, adj_list, vis, st);
// 		}
// 	}

// 	// after visitng all the child/neig , push this node into stack
// 	// stack is keeping the reverse order of task
// 	// if you are saying you have to do work (node) before all the children
// 	// in stack, you should push it after all the childern are visited
// 	st.push(node);
// 	return;
// }




// // topo sort DFS
// vector<int> toposort(int n , vector<vector<int>> adj_list) {


// 	vector<int> vis(n, 0);
// 	stack<int> st;
// 	for (int i = 0 ; i < n; i++) {
// 		if (vis[i] == 0) {
// 			dfs(i, adj_list, vis, st);
// 		}
// 	}

// 	vector<int> toposort_v;

// 	while (st.size()) {
// 		toposort_v.push_back(st.top());
// 		st.pop();
// 	}
// 	return toposort_v;

// }








int main() {
// // Shortest path from src in unweighted graph

// 	// adj list
// 	int n = 0;
// 	vector<vector<int>> adj_list;
// 	vector<int> dis_from_src(n); // shortest path from src to i -> for every i (0 to n)
// 	int src = 0;

// 	q.push(src);
// 	dis[src] = 0;

// 	while(q.size()){
// 		int node = q.front();
// 		q.pop();

// 		// visit neig
// 		for(auto neig : adj_list[node]){
// 			// neig is at dis[neig]
// 			if(dis[node] + 1 < dis[neig]){
// 				q.push(neig);
// 				dis[neig] = dis[node]+ 1;
// 			}
// 		}
// 	}

// 	// print dis array


	return 0;
}




vector<int> toposort(int n , vector<vector<int>> &adj_list) {

	vector<int> indegree(n, 0);

	for (int i = 0 ; i < n; i++) {
		for (int j : adj_list[i]) {
			// i -> j
			indegree[j]++;
		}
	}


	queue<int> q;
	for (int i = 0 ; i < n; i++)
		if (indegree[i] == 0) q.push(i);

	vector<int> ans;

	while (q.size()) {
		int node = q.front();
		q.pop();

		ans.push_back(node);

		// reduce indegree of child/neig by 1
		for (auto neig : adj_list[node]) {
			indegree[neig]--;
			if (indegree[neig] == 0) {
				q.push(neig);
			}
		}
	}

	for (int i = 0 ; i < n; i++) {
		if (indegree[i] > 0) {
			cout << " no valid topo sort , there is a cycle ";
			return {};
		}
	}

	return ans;
}
