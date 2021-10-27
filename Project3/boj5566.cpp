//#include <iostream>
//using namespace std;
//int Map[1001];
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> Map[i];
//
//	}
//	int now = 0;
//	for (int i = 0; i < m; i++) {
//		int tmp;
//		cin >> tmp;
//		now += tmp;
//		if (now >= n - 1) {
//			cout << i + 1 << '\n';
//			return 0;
//		}
//		now += Map[now];
//		if (now >= n - 1) {
//			cout << i + 1 << '\n';
//			return 0;
//		}
//	}
//}