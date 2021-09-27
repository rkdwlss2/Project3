//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//int n, m;
//int vCnt;
//vector<pair<int, int>> v;
//int virus[51][51];
//int wall[51][51];
//int board[51][51];
//int visited[51][51];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//int ans = -1;
//void bfs(int sx, int sy) {
//	queue<pair<int, int>> q;
//	visited[sx][sy] = 1;
//	q.push({ sx,sy });
//	board[sx][sy] = 1;
//	while (!q.empty()) {
//		auto now = q.front(); q.pop();
//		int x = now.first;
//		int y = now.second;
//		int vir = board[x][y];
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = x + dx[dir];
//			int ny = y + dy[dir];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue;
//			if (visited[nx][ny] > 0)continue;
//			if (wall[nx][ny] == 1)continue;
//			int nVir = board[nx][ny];
//			if (nVir!=0&&vir>= nVir)continue;
//			board[nx][ny] = board[x][y] + 1;
//			visited[nx][ny] = 1;
//			q.push({ nx,ny });
//		}
//	}
//}
//
//
//int FindBig() {
//	int answer = -1;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (answer < board[i][j])answer = board[i][j];
//		}
//	}
//	return answer;
//}
//
//void PrintVirus() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << board[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << '\n';
//}
//bool Check() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (board[i][j] <= 0 || wall[i][j] != 1)return false;
//		}
//	}
//	return true;
//}
//bool vis[51 * 51];
//
//vector<int> choice;
//void go(int index, int t) {
//	if (t == m) {
//		memset(visited, 0, sizeof(visited));
//		for (auto i : choice) {
//			bfs(v[i].first, v[i].second);
//		}
//		int answer = FindBig();
//		if (!Check())return;
//		if (ans < answer)ans = answer;
//		return;
//	}
//	for (int i = index+1; i < vCnt; i++) {
//		if (vis[i])continue;
//		vis[i] = true;
//		choice.push_back(i);
//		go(i, t + 1);
//		choice.pop_back();
//		vis[i] = false;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			int tmp;
//			cin >> tmp;
//			if (tmp == 1) {
//				wall[i][j] = 1;
//			}
//			else if (tmp == 2) {
//				virus[i][j] = 1;
//				v.push_back({ i,j });
//			}
//		}
//	}
//	vCnt = v.size();
//	go(0, 0);
//	cout << ans << '\n';
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		if (virus[i][j] == 1) {
//	//			memset(visited, 0, sizeof(visited));
//	//			cout << "before====" << i << ' ' << j << '\n';
//	//			PrintVirus();
//	//			bfs(i, j);
//	//			cout << "after====" << i << ' ' << j << '\n';
//	//			PrintVirus();
//	//		}
//	//	}
//	//}
//	//cout << FindBig() << '\n';
//
//}