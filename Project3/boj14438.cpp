//#include <iostream>
//#include <algorithm>
//using namespace std;
//int arr[100001];
//int tree[4 * 100001];
//const int MAX = 1e9;
//int init(int node, int left, int right) {
//	if (left == right)return tree[node] = arr[left];
//	return tree[node] = min(init(2 * node, left, (left + right) / 2), init(2 * node + 1, (left + right) / 2 + 1, right));
//}
//
//int query(int node, int left, int right, int begin, int end) {
//	if (right < begin || end < left)return MAX;
//	if (begin <= left && right <= end)return tree[node];
//	return min(query(2 * node, left, (left + right) / 2, begin, end), query(2 * node + 1, (left + right) / 2 + 1, right, begin, end));
//}
//
//int update(int node, int left, int right, int k, int val) {
//	if (k > right || k < left) {
//		return tree[node];
//	}
//	if (left == right)return tree[node] = val;
//	return tree[node] = min(update(node * 2, left, (right + left) / 2, k, val), update(node * 2 + 1, (right + left) / 2 + 1, right, k, val));
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	init(1, 0, n - 1);
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (a == 1) {
//			update(1, 0, n - 1, b-1, c);
//		}
//		else {
//			cout << query(1, 0, n - 1, b-1, c-1) << '\n';
//		}
//	}
//}