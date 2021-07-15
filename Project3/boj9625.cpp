//#include <iostream>
//#define lli long long int
//using namespace std;
//
//lli cache[47][2];
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	lli k;
//	cin >> k;
//	cache[0][0] = 1;
//	for (lli i = 1; i <= k; i++) {
//		cache[i][1] += cache[i - 1][0];
//		cache[i][1] += cache[i - 1][1];
//		cache[i][0] += cache[i - 1][1];
//	}
//	cout << cache[k][0] << ' ' << cache[k][1] << '\n';
//}