#include <iostream>
#include <algorithm>
#define lli long long int
using namespace std;
lli arr[100001];
lli n;
bool para(lli m) {
	lli start = 0;
	lli end = n-1;
	lli mid ;
	while (start < end) {
		mid= (start + end) / 2;
		if (arr[mid] <= m) {
			start = mid + 1;
		}
		else if (arr[mid] > m) {
			end = mid - 1;
		}
	}
	if (arr[start] == m&&start<n) return true;
	if (start < n&&start-1>=0) {
		if (arr[start - 1] == m)
			return true;
	}
	return false;
}//test
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int t;
	cin >> t;
	sort(arr, arr + n);
	for (lli i = 0; i < t; i++) {
		lli tmp;
		cin >> tmp;
		if (para(tmp))cout << 1 << '\n';
		else cout << 0 << '\n';//good
	}
}