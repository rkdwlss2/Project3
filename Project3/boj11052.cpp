#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[1001];

int cache[1001][1001];

int go(int index, int Sum) {
	if (index == 0 && Sum == 0)return 0;
	else if (index==0&&Sum!=0) return -987654321;
	int& ret = cache[index][Sum];
	if (ret != -1)return ret;
	ret = 0;
	for (int i = 0; i <= 1000; i++) {
		if ((i * index) <= Sum) {
			ret=max(ret,go(index - 1, Sum - (i * index))+arr[index]*i);
		}
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin>>arr[i];
	}
	for (int i = 0; i < 1001; i++) {
		fill(cache[i], cache[i] + 1001, -1);
	}
	cout << go(n, n) << '\n';
}