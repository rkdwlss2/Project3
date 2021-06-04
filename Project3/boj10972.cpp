//#include <iostream>
//#include <vector>
//using namespace std;
//int n;
//int arr[10001];
//bool visited[10001];
//vector<int> v;
//int go(int index) {
//	if (index == n) {
//		for (auto i : v)cout << i << ' ';
//		return true;
//	}
//	for (int i = 0; i < n; i++) {
//		if (visited[i] == true)continue;
//		visited[i] = true;
//		v.push_back(i);
//		return go(index + 1);
//		visited[i] = false;
//		v.pop_back();
//	}
//	return false;
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//}