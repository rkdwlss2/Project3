//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int arr[1001];
//int cache[1001][1001][2];
//
//int go(int left, int right, int who) {
//	if (left == right) {
//		if (who == 1)return 0;
//		else return arr[left];
//	}
//	int& ret = cache[left][right][who];
//	if (ret != -1)return ret;
//	ret = 0;
//	if (who == 0) {
//			return ret = max(go(left, right - 1, (who + 1) % 2) + arr[right], go(left + 1, right, (who + 1) % 2) + arr[left]);
//	}
//	else {
//			return ret = min(go(left, right - 1, (who + 1) % 2), go(left + 1, right, (who + 1) % 2) );
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int tc;
//	cin >> tc;
//	while (tc--) {
//		int n;
//		cin >> n;
//		for (int i = 0; i < n; i++) {
//			cin >> arr[i];
//		}
//		memset(cache, -1, sizeof(cache));
//		cout << go(0, n - 1, 0) << '\n';
//	}
//}