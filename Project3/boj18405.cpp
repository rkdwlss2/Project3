//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//int n,k;
//int board[201][201];
//
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n>>k;
//	vector<pair<int, pair<int, int>>> v;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> board[i][j];
//			if (board[i][j] > 0) {
//				v.push_back({ board[i][j],{i,j} });
//			}
//		}
//	}
//	int s, lx, ly;
//	cin >> s >> lx >> ly;
//	sort(v.begin(), v.end());
//
//
//	queue<pair<pair<int,int>,pair<int, int>>> q;
//	for (auto i : v) {
//		q.push({ {i.first,0},{i.second.first,i.second.second} });
//	}
//	while (!q.empty()) {
//		auto now = q.front();
//		q.pop();
//		int color = now.first.first;
//		int sec = now.first.second;
//		int x = now.second.first;
//		int y = now.second.second;
//		sec++;
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = x + dx[dir];
//			int ny = y + dy[dir];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue;
//			if (board[nx][ny] != 0||sec>s)continue;
//			board[nx][ny] = color;
//			q.push({ {color,sec},{nx,ny} });
//		}
//
//	}
//	cout << board[lx-1][ly-1] << '\n';
//}