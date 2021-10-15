//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, m;
//
//vector<int> v;
//bool visited[9];
//int arr[9];
//void go(int index, int num) {
//	if (index == n)return;
//	if (num == m) {
//		for (auto i : v) {
//			cout << i << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//	for (int i = 0; i < n; i++) {
//		if (visited[i])continue;
//		visited[i] = true;
//		v.push_back(arr[i]);
//		go(i, num + 1);
//		visited[i] = false;
//		v.pop_back();
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		int tmp;
//		cin >> arr[i];
//	}
//	sort(arr, arr + n);
//	go(0, 0);
//}