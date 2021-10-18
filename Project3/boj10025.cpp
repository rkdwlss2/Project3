//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int n, k;
//
//unordered_map<int, int> um;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> k;
//	int index = 0;
//	for (int i = 0; i < n; i++) {
//		int g, x;
//		cin >> g >> x;
//		index = index + x;
//		um.insert({ index,g });
//	}
//	int last = index + k + 1;
//	int start = k + 1;
//	int ans = 0;
//	for (int i = 0; i < 2 * k + 1; i++) {
//		if (um.count(i) > 0)ans+=um[i];
//	}
//	int Max = ans;
//
//	for (int i = k + 1; i <= index+1; i++) {
//		int s = i - k-1;
//		int e = i + k;
//		if (um.count(s) > 0)ans-=um[s];
//		if (um.count(e) > 0)ans+=um[e];
//		if (Max < ans)Max = ans;
//	}
//	cout << Max << '\n';
//	
//}