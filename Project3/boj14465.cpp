#include <iostream>

using namespace std;
int n, k, b;

int arr[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k >> b;
	for (int i = 0; i < b; i++) {
		int tmp;
		cin >> tmp;
		arr[tmp] = 1;
	}
	int ans = 0;
	for (int i = 1; i <= k; i++) {
		if (arr[i] == 1)ans++;
	}
	int Max = ans;
	for (int i = 2; i <= n - k+1; i++) {
		if (arr[i-1] == 1)ans--;
		if (arr[i + k - 1] == 1)ans++;
		if (Max > ans) Max = ans;
	}
	cout << Max << '\n';
}