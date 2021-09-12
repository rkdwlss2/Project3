//#include <iostream>
//#include <algorithm>
//#define lli long long int
//using namespace std;
//
//lli tree[100001*4];
//lli tree2[100001 * 4];
//lli arr[100005];
//
//lli init(lli node, lli start, lli end) {
//	if (start == end)return tree[node] = arr[start];
//	else return tree[node] = min(init(node * 2, start, (start + end) / 2), init(node * 2 + 1, (start + end) / 2 + 1, end));
//}
//
//lli init2(lli node, lli start, lli end) {
//	if (start == end)return tree2[node] = arr[start];
//	else return tree2[node] = max(init2(node * 2, start, (start + end) / 2), init2(node * 2 + 1, (start + end) / 2 + 1, end));
//}
//
//lli getMin(int node, int st, int en, int l, int r) {
//	if (r<st || l>en)return 10000000009;
//	if (l <= st && en <= r)return tree[node];
//	return min(getMin(node * 2, st, (st + en) / 2, l, r), getMin(node * 2 + 1, (st + en) / 2 + 1, en, l, r));
//}
//
//lli getMax(int node, int st, int en, int l, int r) {
//	if (r<st || l>en)return 0;
//	if (l <= st && en <= r)return tree2[node];
//	return max(getMax(node * 2, st, (st + en) / 2, l, r), getMax(node * 2 + 1, (st + en) / 2 + 1, en, l, r));
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	init(1, 1, n);
//	init2(1, 1, n);
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		cout << getMin(1, 1, n, a, b) << ' ' << getMax(1, 1, n, a, b) << '\n';
//	}
//}