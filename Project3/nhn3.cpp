//#include <iostream>
//#include <vector>
//
//using namespace std;
//int n, m,k;
//vector<pair<int,int>> v;
//vector<vector<pair<int, int>>> ans;
//
//int board[11][6];
//void go(int index, int num) {
//	if (index == n) {
//		if (num == k) {
//			ans.push_back(v);
//		}
//		return;
//	}
//	for (int i = 0; i <= k; i++){
//		if (num + i <= k) {
//			if (i > m)continue;
//			v.push_back({ index, i });
//			go(index + 1, num + i);
//			v.pop_back();
//		}
//	}
//}
//
//int cal(int index) {
//	vector<pair<int, int>> calTmp=ans[index];
//	int sum = 0;
//	for (auto i : calTmp) {
//		int ind = i.first;
//		int move = i.second;
//		int nMove = m - move;
//		sum += board[ind][nMove];
//	}
//	return sum;
//}
//
//int main() {
//	cin >> n >> m>>k;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> board[i][j];
//		}
//	}
//
//
//	go(0, 0);
//
//
//	int realAns = 0;
//
//	for (int i = 0; i < ans.size();i++) {
//		/*cout << "this is start=====================" << '\n';
//		for (auto j : i) {
//			cout << j.first << ' ' << j.second << '\n';
//		}*/
//		int Score = cal(i);
//		if (Score > realAns)realAns = Score;
//	}
//	cout << realAns << '\n';
//}