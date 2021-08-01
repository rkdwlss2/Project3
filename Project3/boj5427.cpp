//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//using namespace std;
//int sgX, sgY;
//int n, m;
//int board[1001][1001];
//int pBoard[1001][1001];
//int visited[1001][1001];
//int visited2[1001][1001];
//char charList[4] = { '.','#','*','@' };
//vector<pair<int, int>> tmpQ;
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//void bfs() {
//	queue<pair<int, int>> q;
//	for (int i = 0; i < tmpQ.size(); i++) {
//		int tmpX = tmpQ[i].first;
//		int tmpY = tmpQ[i].second;
//		q.push({ tmpX,tmpY });
//		visited[tmpX][tmpY] = 1;
//	}
//	while (!q.empty()) {
//		auto now = q.front(); q.pop();
//		int x = now.first;
//		int y = now.second;
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = x + dx[dir];
//			int ny = y + dy[dir];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
//			if (visited[nx][ny] > 0||board[nx][ny]==1)continue;
//			visited[nx][ny] = visited[x][y] + 1;
//			q.push({ nx,ny });
//		}
//	}
//
//}
//
//int bfs2() {
//	queue<pair<int, int>> q;
//	q.push({ sgX,sgY });
//	visited2[sgX][sgY] = 1;
//	while (!q.empty()) {
//		auto now = q.front(); q.pop();
//		int x = now.first;
//		int y = now.second;
//
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = x + dx[dir];
//			int ny = y + dy[dir];
//			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
//				return visited2[x][y];
//			}
//			if (visited2[nx][ny] > 0 || board[nx][ny] == 1)continue;
//			if (visited[nx][ny]!=0&&visited[nx][ny] <= visited2[x][y] + 1)continue;
//			visited2[nx][ny] = visited2[x][y] + 1;
//			q.push({ nx,ny });
//		}
//	}
//	return -1;
//}
//
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int tc;
//	cin >> tc;
//	while (tc--) {
//		cin >> m >> n;
//		tmpQ.clear();
//		memset(visited, 0, sizeof(visited));
//		memset(board, 0, sizeof(board));
//		memset(visited2, 0, sizeof(visited2));
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				char tmp;
//				cin>>tmp;
//				if (tmp == charList[0]) {
//					board[i][j] = 0;
//				}
//				else if (tmp == charList[1]) {
//					board[i][j] = 1;
//				}
//				else if (tmp == charList[2]) {
//					tmpQ.push_back({ i,j });
//				}
//				else if (tmp == charList[3]) {
//					sgX = i;
//					sgY = j;
//				}
//				
//			}
//		}
//		bfs();
//		int answer = bfs2();
//		if (answer == -1) {
//			cout << "IMPOSSIBLE" << '\n';
//		}
//		else {
//			cout << answer<< '\n';
//		}
//		
//	}
//	
//}