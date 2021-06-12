#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
int arr[100001][2];
int cache[100001][3];
int dp(int index, int prev) {
	if (index == n)return 0;
	int& ret = cache[index][prev];
	if (ret != -1)return ret;
	ret = 0;
	if (prev == 0) {
		ret = max(ret, dp(index + 1,1)+arr[index][1]);
	}
	else if (prev == 1) {
		ret = max(ret, dp(index + 1, 0) + arr[index][0]);
	}
	else {
		ret = max(ret, dp(index + 1, 1) + arr[index][1]);
		ret = max(ret, dp(index + 1, 0) + arr[index][0]);
	}
	ret = max(ret, dp(index + 1, 2));
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		cin >> n;
		memset(cache, -1, sizeof(cache));
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				cin >> arr[j][i];
			}
		}
		cout << dp(0, 2) << '\n';
	}

}