#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a, b;
	int n, m;
	cin >> a >> b;
	n = atoi(a.c_str());
	m = atoi(b.c_str());
	int c=0;
	int aSize = a.size();
	if (aSize * n <= m) {
		for (int i = 0; i < n*aSize; i++) {
			cout << a[c];
			c++;
			c = (c + aSize) % aSize;
		}
	}
	else {
		for (int i = 0; i < m; i++) {
				cout << a[c];
			c++;
			c = (c + aSize) % aSize;
		}
	}
}