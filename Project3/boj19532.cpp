//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> v;
//int a, b, c, d, e, f;
//int x, y;
//void go(int index) {
//	if (index == 2) {
//		int ansFirst = a * v[0] + b * v[1];
//		int ansSecond = d * v[0] + e * v[1];
//		if (ansFirst == c && ansSecond == f) {
//			x = v[0];
//			y = v[1];
//		}
//		return;
//	}
//	for (int i = -999; i < 1000; i++){
//		v.push_back(i);
//		go(index + 1);
//		v.pop_back();
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	
//	cin >> a >> b >> c >> d >> e >> f;
//	go(0);
//	cout << x << ' ' << y << '\n';
//}