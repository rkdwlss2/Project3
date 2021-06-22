//#include <iostream>
//#include <queue>
//using namespace std;
//int n, k;
//
//int visited[200001];
//int checked[200001];
//int bfs(int start) {
//	queue<int> q;
//	q.push(start);
//	visited[start] = 1;
//	while (!q.empty()) {
//		int now = q.front();
//		q.pop();
//		if (now == k) {
//			return visited[now]-1;
//		}
//		if (now - 1 >= 0&&visited[now-1]==0) {
//			visited[now - 1] = visited[now]+1;
//			q.push(now-1);
//			checked[now - 1] = now;
//		}
//		if (now + 1 <= 2*n && visited[now + 1] == 0) {
//			visited[now + 1] = visited[now] + 1;
//			q.push(now + 1);
//			checked[now + 1] = now;
//		}
//		if (now * 2 <= 2 * n && visited[2 * now] == 0) {
//			visited[now * 2] = visited[now] + 1;
//			q.push(now * 2);
//			checked[now * 2] = now;
//		}
//	}
//	return -1;
//}
//void recon(int index, int prev) {
//
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> k;
//
//}