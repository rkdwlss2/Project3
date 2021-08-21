//#include <iostream>
//#include <cstring>
//#define lli long long int
//using namespace std;
//
//lli tmp;
//lli cache[100001][4];
//
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	lli n;
//	cin >> n;
//	cache[1][1] = cache[2][2] = cache[3][3] = 1;
//	cache[3][1] = cache[3][2] = 1;
//	for (lli i = 4; i <= 100000; i++) {
//		cache[i][1] = (cache[i - 1][2] + cache[i - 1][3]) % 1000000009;
//		cache[i][2] = (cache[i - 2][1] + cache[i - 2][3]) % 1000000009;
//		cache[i][3] = (cache[i - 3][1] + cache[i - 3][2]) % 1000000009;
//	}
//	for (lli i = 0; i < n; i++) {
//
//		cin >> tmp;
//		cout << (cache[tmp][1] + cache[tmp][2] + cache[tmp][3]) % 1000000009 << '\n';
//	}
//}