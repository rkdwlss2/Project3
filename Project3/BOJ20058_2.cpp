//#include <iostream>
//#include <queue>
//using namespace std;
//int board[65][65];
//int n, q,N;
//int Lot[4] = {1,3,0,2};
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//bool visited[65][65];
//int bfs(int sx,int sy) {
//	if (sx < 0 || sx >= N || sy < 0 || sy >= N)return 0;
//	if (board[sx][sy] == 0)return 0;
//	queue<pair<int, int>> q;
//	visited[sx][sy] = true;
//	q.push({ sx,sy });
//	int count = 1;
//	while (!q.empty()) {
//		auto now = q.front(); q.pop();
//		int x = now.first;
//		int y = now.second;
//		for (int dir = 0; dir < 4; dir++) {
//			int nx = x + dx[dir];
//			int ny = y + dy[dir];
//			if (nx < 0 || nx >= N || ny < 0 || ny >= N)continue;
//			if (visited[nx][ny] == true || board[nx][ny] == 0)continue;
//			visited[nx][ny] = true;
//			count++;
//			q.push({ nx,ny });
//		}
//	}
//	return count;
//}
//int makeTwo(int num) {
//	int answer = 1;
//	while (num--) {
//		answer *= 2;
//	}
//	return answer;
//}
//
//void rotate(int x,int y,int Size) {
//	int tmp[65][65];
//		for (int j = 0; j < Size;j++) {
//			for (int k = 0; k < Size; k++) {
//				tmp[x +k][y+ Size-1-j] = board[x+j][y+k];
//			}
//		}
//	
//	for (int i = 0; i < Size; i++) {
//		for (int j = 0; j < Size; j++) {
//			board[x+i][y+j] = tmp[x+i][y+j];
//		}
//	}
//}
//
//int getSum() {
//	int answer = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			answer += board[i][j];
//		}
//	}
//	return answer;
//}
//
//int getBig() {
//	int Big = -1;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			int nowCnt = bfs(i, j);
//			if (nowCnt > Big)Big = nowCnt;
//		}
//	}
//	return Big;
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> q;
//	int lLen = makeTwo(n);
//	N = lLen;
//	for (int i = 0; i < lLen; i++) {
//		for (int j = 0; j < lLen; j++) {
//			cin >> board[i][j];
//		}
//	}
//	
//	for (int i = 0; i < q; i++) {
//		int now;
//		cin >> now;
//		int Len = makeTwo(now);
//		/*cout << "before : " << '\n';
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cout << board[i][j] << ' ';
//			}
//			cout << '\n';
//		}*/
//		if (now != 0) {
//			for (int i = 0; i < lLen; i += Len) {
//				for (int j = 0; j < lLen; j += Len) {
//					rotate(i, j, Len);
//				}
//			}
//		}
//		/*cout << "after : " << '\n';
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cout << board[i][j] << ' ';
//			}
//			cout << '\n';
//		}*/
//		int tboard[65][65];
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				int cnt = 0;
//				for (int dir = 0; dir < 4; dir++) {
//					int nx = i + dx[dir];
//					int ny = j + dy[dir];
//					if (nx < 0 || nx >= N || ny < 0 || ny >= N)continue;
//					if (board[nx][ny] == 0)continue;
//					cnt++;
//				}
//				if (cnt <=2) {
//					if (board[i][j] != 0) {
//						tboard[i][j] = board[i][j] - 1;
//					}
//					else {
//						tboard[i][j] = board[i][j];
//					}
//				}
//				else tboard[i][j]=board[i][j];
//			}
//		}
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				board[i][j] = tboard[i][j];
//			}
//		}
//	}
//	/*for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << board[i][j] << ' ';
//		}
//		cout << '\n';
//	}*/
//	cout << getSum() << '\n';
//	cout << getBig() << '\n';
//
//}