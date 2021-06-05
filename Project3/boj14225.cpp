//#include <iostream>
//#include <cstring>
//using namespace std;
//int n,m;
//int arr[100001];
//
//int cache[21][2000002];
//
//int dp(int index, int sum) {
//	if (index == n && sum == 0)return true;
//	if (index == n)return false;
//	int& ret = cache[index][sum];
//	if (ret != -1)return ret;
//	ret = false;
//	if (dp(index + 1, sum - arr[index]))ret = true;
//	if (dp(index+1, sum))ret = true;
//	return ret;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	memset(cache, -1, sizeof(cache));
//	for (int i = 1; i <=2000001; i++) {
//		m = i;
//		if (!dp(0,i)) {
//			cout << i << '\n';
//			return 0;
//		}
//	}
//}