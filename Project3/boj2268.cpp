#include <iostream>
using namespace std;

#define lli long long int

lli arr[1000005];
lli tree[4 * 1000005];

void update(lli node, lli left, lli right, lli k , lli def) {
	if (left > k || right < k)return;
	tree[node] += def;
	if (left == right) {
		return;
	}
	update(2 * node, left, (left + right) / 2, k, def);
	update(2 * node + 1, (left + right) / 2 + 1,right, k, def);
}

lli sum(lli node, lli left, lli right, lli l, lli r) {
	if (r < left || right < l)return 0;
	if (l<=left&&right<=r)return tree[node];
	return sum(2 * node, left, (left + right) / 2, l, r)+sum(2*node+1,(left+right)/2+1,right,l,r);
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	lli n, m;
	cin >> n >> m;
	for (lli i = 0; i < m; i++) {
		lli a, b, c;
		cin >> a >> b >> c;
		if (a == 0) {
			if (b > c)swap(b, c);
			cout << sum(1, 1, n, b, c) << '\n';
		}
		else {
			lli tmp = arr[b];
			arr[b] = c;
			lli def = c - tmp;
			update(1, 1, n, b, def);
		}
	}
}