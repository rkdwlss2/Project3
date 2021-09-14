//#include <iostream>
//#include <algorithm>
//#include <cmath>
//#include <string>
//#include <cstring>
//#include <vector>
//#include <queue>
//#include <map>
//
//using namespace std;
//const int inf = 1000000000;
//typedef long long ll;
//
//ll fac[16], arr[16], d[51], l[16];
//ll dp[(1 << 15) + 1][101];
//int n, k;
//ll gcd(ll a, ll b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//ll dfs(int used, int m)
//{
//	if (used == (1 << n) - 1) return m == 0;
//
//	ll& ret = dp[used][m];
//	if (ret != -1)return ret;
//	ret = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		if (used & (1 << i)) continue;
//
//		int mod = (d[l[i]] * m + arr[i]) % k;
//		ret += dfs(used | (1 << i), mod);
//	}
//	return ret;
//}
//int main()
//{
//	fac[0] = d[0] = 1;
//
//	string t[16];
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> t[i];
//		fac[i + 1] = fac[i] * (i + 1);
//	}
//
//	cin >> k;
//
//	////// ÀüÃ³¸® //////
//	for (int i = 0; i < n; ++i)
//	{
//		l[i] = t[i].size();
//		for (auto j : t[i]) arr[i] = (10 * arr[i] + j - '0') % k;
//	}
//	for (int i = 1; i <= 50; ++i) d[i] = (d[i - 1] * 10) % k;
//
//
//	memset(dp, -1, sizeof(dp));
//
//	ll ret = dfs(0, 0);
//	ll g = gcd(ret, fac[n]);
//
//	printf("%lld/%lld", ret / g, fac[n] / g);
//
//	return 0;
//}