#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n;
int arr[21][21];
int cache[21][1 << 21];

int dp(int index, int state) {
	if (index == n)return 0;
	int& ret = cache[index][state];
	if (ret != -1)return ret;
	ret = 987654321;
	for (int i = 0; i < n; i++) {
		if (state & (1 << i)) continue;
		state += (1 << i);
		ret=min(ret,dp(index+1, state)+arr[i][index]);
		state -= (1 << i);
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	memset(cache, -1, sizeof(cache));
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >>arr[i][j];
		}
	}
	cout << dp(0, 0) << '\n';
}