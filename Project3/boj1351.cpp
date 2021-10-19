#include <iostream>
#include <map>
using namespace std;

long long n, p, q;

map<long long, long long> m;

long long go(long long n) {
	if (n == 0)return 1;
	if (m.count(n) > 0) {
		return m[n];
	}
	long long now = go(n / p) + go(n / q);
	m.insert({ n,now });
	return now;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> p >> q;
	cout << go(n) << '\n';
}