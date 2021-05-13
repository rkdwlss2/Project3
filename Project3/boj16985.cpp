//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//vector<int> v;
//vector<int> v2;
//bool vis[5];
//int board[6][6][6];
//int tboard[6][6][6];
//int dx[6] = { 0,0,1,-1,0,0 };
//int dy[6] = { 1,-1,0,0,0,0 };
//int dz[6] = { 0,0,0,0,1,-1 };
//int visited[6][6][6];
//int answer = 987654321;
//int bfs() {
//	queue < pair<int, pair<int, int>>> q;
//	q.push({ 0,{0,0} });
//	visited[0][0][0] = 1;
//	while (!q.empty()) {
//		pair<int, pair<int, int>>  now = q.front();
//		q.pop();
//		int x = now.first;
//		int y = now.second.first;
//		int z = now.second.second;
//		for (int dir = 0; dir < 6; dir++) {
//			int nx = x + dx[dir];
//			int ny = y + dy[dir];
//			int nz = z + dz[dir];
//			if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5 || nz < 0 || nz >= 5)continue;
//			if (visited[nx][ny][nz] > 0||tboard[nx][ny][nz]==0)continue;
//			visited[nx][ny][nz] = visited[x][y][z] + 1;
//			if (nx == 4 && ny == 4 && nz == 4) {
//				return visited[nx][ny][nz] - 1;
//			}
//			q.push({ nx,{ny,nz} });
//		}
//	}
//	return -1;
//}
//
//void ro(int state) {
//	int tb[6][6];
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			tb[5-j-1][i] = tboard[state][i][j];
//		}
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			tboard[state][i][j] = tb[i][j];
//		}
//	}
//}
//
//void rotate(int state,int num) {
//	while (num--) {
//		ro(state);
//	}
//}
//
//void solve() {
//	for (int i = 0; i < v.size(); i++) {
//		rotate(i, v[i]);
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			for (int k = 0; k < 5; k++) {
//				visited[i][j][k] = 0;
//			}
//		}
//	}
//	int tanswer = -1;
//	if (tboard[0][0][0] == 1)tanswer = bfs();
//	if (tanswer != -1 && answer > tanswer)answer = tanswer;
//}
//
//void go2(int index,int prev) {
//	if (index == 5) {
//		for (int a = 0; a < 5;a++) {
//			for (int i = 0; i < 5; i++) {
//				for (int j = 0; j < 5; j++) {
//					tboard[a][i][j] = board[v2[a]][i][j];
//				}
//			}
//		}
//		solve();
//	}
//	for (int i = 0; i < 5; i++) {
//		if (vis[i] == true)continue;
//		v2.push_back(i);
//		vis[i] = true;
//		go2(index + 1, i);
//		vis[i] = false;
//		v2.pop_back();
//	}
//}
//
//void go(int index) {
//	if (index == 5) {
//		go2(0, -1);
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		v.push_back(i);
//		go(index + 1);
//		v.pop_back();
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			for (int k = 0; k < 5; k++) {
//				cin>>board[i][j][k];
//			}
//		}
//	}
//	go(0);
//	if (answer != 987654321)cout << answer << '\n';
//	else cout << -1 << '\n';
//}