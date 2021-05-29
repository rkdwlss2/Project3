//#include <iostream>
//#include <vector>
//#define lli long long int
//using namespace std;
//
//lli n;
//lli arr[101];
//bool visited[101];
//vector<lli> v;
//void go(lli index, lli prev) {
//	if (index == n-1) {
//		for (lli i = 0; i < v.size(); i++) {
//			cout << v[i] << ' ';
//		}cout << '\n';
//		exit(0);
//	}
//	for (lli i = 0; i < n; i++) {
//		if (visited[i] == true)continue;
//		visited[i] = true;
//		v.push_back(arr[i]);
//		if (arr[i]*3 == arr[prev]) {
//			go(index + 1, i);
//		}
//		if (arr[i] == arr[prev] * 2) {
//			go(index + 1, i);
//		}
//		v.pop_back();
//		visited[i] = false;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (lli i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (lli i = 0; i < n; i++) {
//		visited[i] = true;
//		v.push_back(arr[i]);
//		go(0, i);
//		visited[i] = false;
//		v.pop_back();
//	}
//}