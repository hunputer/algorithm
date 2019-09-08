/*#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

bool check[100];
int dist[100];
int len[100];
int parent[100];

class edge {
public:
	int to;
	int cost;
	edge(int to, int cost) : to(to), cost(cost){}
};

int main() {
	int m;
	cin >> m;
	vector<edge> a[100];
	for (int i = 0; i < m-1; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		a[u].push_back(edge(v, w));
		a[v].push_back(edge(u, w));
	}

		int u, v;
		cin >> u >> v;
		dist[u] = 0;
		parent[u] = 0;
		len[u] = 0;
		check[u] = true;
		int k = 0;
		queue<int> q;
		q.push(u);
		while (!q.empty()) {
			int x = q.front();
			q.pop();
			for (int i = 0; i < a[x].size(); i++) {
				edge e = a[x][i];
				if (!check[e.to]) {
					dist[e.to] = e.cost;
					len[k++] = e.cost;
					parent[e.to] = x;
					check[e.to] = true;
					q.push(e.to);
				}
			}
		}

		stack<int> st;
		int end = v;
		while (end != 0) {
			st.push(end);
			end = parent[end];
		}
		int min_ans = 1000000;
		int max_ans = 0;
		while (!st.empty()) {
			for (int i = 0; i < 100; i++) {
				if (max_ans < dist[st.top()]) {
					max_ans = dist[st.top()];
				}
			}
			for (int i = 0; i < 100; i++) {
				if (dist[st.top()] != 0 && min_ans > dist[st.top()]) {
					min_ans = dist[st.top()];
				}
			}
			st.pop();
		}
		cout << min_ans << endl;
		cout << max_ans << endl;
}*/