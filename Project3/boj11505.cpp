//#include <iostream>
//#define NUMBER 1000001
//#define MOD 1000000007
//#define lli long long int
//using namespace std;
//lli n, m, k;
//
//lli a[1000001];
//lli tree[4 * NUMBER];
//
//lli init(lli start, lli end, lli node) {
//	if (start == end)return tree[node] = a[start];
//	lli mid = (start + end) / 2;
//	return tree[node] = ((init(start, mid, node * 2)% MOD) *(init(mid + 1, end, node * 2 + 1)% MOD))%MOD;
//}
//lli sum(lli start, lli end, lli node, lli left, lli right) {
//	if (left > end || right < start)return 1;
//	if (left <= start && end <= right)return tree[node];
//	lli mid = (start + end) / 2;
//	return ((sum(start, mid, node * 2, left, right) % MOD) * (sum(mid + 1, end, node * 2 + 1, left, right) % MOD)) % MOD;
//}
//void update(lli start, lli end, lli node, lli index, lli dif) {
//	if (index<start || index>end)return;
//	if (start == end) {
//		tree[node] = dif;
//		return;
//	}
//	lli mid = (start + end) / 2;
//	update(start, mid, node * 2, index, dif);
//	update(mid + 1, end, node * 2 + 1, index, dif);
//	tree[node] = ((tree[node * 2] % MOD) * (tree[node * 2 + 1] % MOD)) % MOD;
//
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m >> k;
//	for (lli i = 0; i < n; i++) {
//		lli tmp;
//		cin >> tmp;
//		a[i] = tmp;
//	}
//	init(0, n - 1, 1);
//	for (lli j = 0; j < m + k; j++) {
//		lli tmp;
//		cin >> tmp;
//		lli a, b;
//		cin >> a >> b;
//		if (tmp == 1) {
//			update(0, n - 1, 1, a-1, b);
//		}
//		else {
//			cout<<sum(0, n - 1, 1, a-1, b-1)%MOD<<'\n';
//		}
//	}
//
//}