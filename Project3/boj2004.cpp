#include <iostream>
#include <algorithm>
using namespace std;

int count25(int num,int mod) {
	int val = num;
	int cnt = 0;
	while (val > 0) {
		if (mod == 2) {
			val /= 2;
		}
		if (mod == 5) {
			val /= 5;
		}
		cnt += val;
	}
	return cnt;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	int n2 = count25(n, 2) - count25(m, 2) - count25(n - m, 2);
	int n5 = count25(n, 5) - count25(m, 5) - count25(n - m, 5);
	cout << min(n2, n5) << '\n';
}