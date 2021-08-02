//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//vector<int> graph[2001];
//int n, m;
//bool answer;
//int visited[2001];
//void dfs(int now) {
//	if (visited[now] == 5) {
//		answer = true;
//		return;
//	}
//	for (int i = 0; i < graph[now].size(); i++) {
//		int next = graph[now][i];
//		if (visited[next] > 0)continue;
//		visited[next] = visited[now] + 1;
//		dfs(next);
//	}
//	visited[now] = 0;
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		graph[a].push_back(b);
//		graph[b].push_back(a);
//	}
//	for (int i = 0; i <n; i++) {
//		if (visited[i] == 0) {
//			visited[i] = 1;
//			dfs(i);
//		}
//		
//	}
//	if (answer)cout << 1 << '\n';
//	else cout << 0 << '\n';
//
//}