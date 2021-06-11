//#include <iostream>
//#define lli long long int
//using namespace std;
//
//lli cache[65][11];
//lli n;
//lli dp(lli index, lli prev) {
//	if (index == n)return 1;
//	lli& ret = cache[index][prev];
//	if (ret != -1)return ret;
//	ret = 0;
//	for (lli next=prev;next<10;next++){
//		ret += dp(index + 1, next);
//	}
//	return ret;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	lli tc;
//	cin >> tc;
//	while (tc--) {
//		for (lli i = 0; i < 65; i++) {
//			fill(cache[i], cache[i] + 11, -1);
//		}
//		cin >> n;
//		cout << dp(0, 0) << '\n';
//	}
//}