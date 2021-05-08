//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int n, m;
//vector<pair<int, int>> chicken;
//vector<pair<int, int>> home;
//int board[51][51];
//int chickenDis[2501][2501];
//int distance(int x, int y, int x1, int y1) {
//	return fabs(x - x1) + fabs(y - y1);
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	int count=0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> board[i][j];
//			if (board[i][j] == 2) {
//				chicken.push_back({ i,j });
//				count++;
//			}
//			else if (board[i][j] == 1) {
//				home.push_back({ i,j });
//			}
//		}
//	}
//	vector<int> indexArray;
//	for (int i = 0; i <count; i++) {
//		if (i < count-m) {
//			indexArray.push_back(0);
//		}
//		else {
//			indexArray.push_back(1);
//		}
//	}
//	
//	int realans = 987654321;
//	do {
//		int ans =0;
//		for (int i = 0; i < home.size(); i++) {
//			int min = 987654321;
//			for (int j = 0; j < count; j++) {
//				if (indexArray[j] == 0)continue;
//				int dis = distance(home[i].first, home[i].second, chicken[j].first, chicken[j].second);
//				if (min > dis) {
//					min = dis;
//				}
//			}
//			ans += min;
//		}
//		if (realans > ans) {
//			realans = ans;
//		}
//	} while (next_permutation(indexArray.begin(),indexArray.end()));
//
//	cout << realans << '\n';
//}