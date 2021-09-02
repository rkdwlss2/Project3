//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int End;
//int n, m;
//bool visited[10001];
//vector<pair<int,int>> graph[10001];
//
//bool bfs(int start,int num) {
//	visited[start] = true;
//	queue<int> q;
//	q.push(start);
//	while (!q.empty()) {
//		auto now = q.front();
//		q.pop();
//		for (int i = 0; i < graph[now].size(); i++) {
//			int next = graph[now][i].first;
//			int cost = graph[now][i].second;
//			if (cost < num)continue;
//			if (visited[next])continue;
//			visited[next] = true;
//			q.push(next);
//			if (next == End)return true;
//			
//		}
//	}
//	return false;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		graph[a].push_back({ b,c });
//		graph[b].push_back({ a,c });
//	}
//	int start;
//	cin >> start >> End;
//	int l = 1, r = 1000000000,mid;
//	while (l <=r) {
//		mid = (l + r) / 2;
//		fill(visited, visited + 10001, false);
//		if (bfs(start, mid)) {
//			l = mid+1 ;
//		}
//		else {
//			r = mid - 1;
//		}
//	}
//	cout << r<< '\n';
//}