//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int n, m, k;
//int board[51][51];
//int board1[51][51];
//vector < pair<int, pair<int, int>>> moves;
//vector<int> v;
//bool visited[7];
//deque<int> q;
//int dx[4] = {0,1,0,-1};
//int dy[4] = {1,0,-1,0};
//int answer = 987654321;
//void rMove(int sx, int sy, int L,int mod) {
//	int x = sx;
//	int y = sy;
//	for (int dir = 0; dir < 4; dir++) {
//		for (int a = 0; a < 2*L; a++) {
//			int nx = x + dx[dir];
//			int ny = y + dy[dir];
//			if (mod==0)q.push_back(board[nx][ny]);
//			else {
//				int tmp = q.front(); q.pop_front();
//				board[nx][ny] = tmp;
//			}
//			x = nx;
//			y = ny;
//		}
//	}
//}
//
//void move(int num) {
//	int tr, tc, ts;
//	tr = moves[num].second.first;
//	tc = moves[num].second.second;
//	ts = moves[num].first;
//	int len = 0;
//	while (ts--) {
//		len++;
//		int x = tr - len;
//		int y = tc - len;
//		rMove(x, y, len, 0);
//		int t = q.back(); q.pop_back();
//		q.push_front(t);
//		rMove(x, y, len, 1);
//
//	}
//}
//int count() {
//	int Small = 987654321;
//	for (int i = 0; i < n; i++) {
//		int ss = 0;
//		for (int j = 0; j < m; j++) {
//			ss += board[i][j];
//		}
//		if (Small> ss)Small = ss;
//	}
//	return Small;
//}
//void go(int index) {
//	if (index == k) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				board[i][j] = board1[i][j];
//			}
//		}
//		for (int i : v) {
//			move(i);
//		}
//		int Sm = count();
//		if (answer > Sm)answer = Sm;
//		return;
//	}
//	for (int next = 0; next < k; next++) {
//		if (visited[next] == true)continue;
//		visited[next] = true;
//		v.push_back(next);
//		go(index + 1);
//		visited[next] = false;
//		v.pop_back();
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m >> k;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			int tt;
//			cin >> tt;
//			board[i][j]=tt;
//			board1[i][j]=tt;
//		}
//	}
//	for (int i = 0; i < k; i++) {
//		int r, c, s;
//		cin >> r >> c >> s;
//		moves.push_back({ s,{r-1,c-1} });
//	}
//	go(0);
//	cout << answer << '\n';
//}