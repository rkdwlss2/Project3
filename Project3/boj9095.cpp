//#include <iostream>
//using namespace std;
//
//int cache[12];
//
//int dp(int index) {
//	if (index == 0) return 1;
//	if (index < 0)return 0;
//	int& ret = cache[index];
//	if (ret != -1)return ret;
//	return ret = dp(index - 1) + dp(index - 2) + dp(index - 3);
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	while (n--) {
//		fill(cache, cache + 12, -1);
//		int tmp;
//		cin >> tmp;
//		cout << dp(tmp) << '\n';
//	}
//}