//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//int five = 5;
//int board[6][6];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//vector<int> v;
//unordered_map<int,int> um;
//void go(int x, int y,int cnt) {
//	if (cnt == 5) {
//		v.push_back(board[x][y]);
//		int sum = v[0];
//		for (int i = 1; i < v.size(); i++) {
//			sum *= 10;
//			sum += v[i];
//		}
//		if (um.count(sum) ==0) {
//			um.insert({ sum,0 });
//			//cout << sum << '\n';
//		}
//		v.pop_back();
//		return;
//	}
//	for (int dir = 0; dir < 4; dir++) {
//		int nx = x + dx[dir];
//		int ny = y + dy[dir];
//		if (nx < 0 || nx >= five || ny < 0 || ny >= five) {
//			continue;
//		}
//		v.push_back(board[x][y]);
//		go(nx, ny, cnt + 1);
//		v.pop_back();
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	for (int i = 0; i < five; i++) {
//		for (int j = 0; j < five; j++) {
//			cin >> board[i][j];
//		}
//	}
//	for (int i = 0; i < five; i++) {
//		for (int j = 0; j < five; j++) {
//			go(i, j, 0);
//		}
//	}
//	cout << um.size() << '\n';
//}