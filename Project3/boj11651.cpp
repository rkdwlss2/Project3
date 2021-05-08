//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Edge {
//	int x, y;
//	Edge(int _x, int _y) :x(_x), y(_y) {}
//	bool operator < (Edge a){
//		if (y == a.y) {
//			if (x < a.x) {
//				return true;
//			}
//			else {
//				return false;
//			}
//		}
//		else if (y < a.y) return true;
//		else return false;
//	}
//};
//vector<Edge> v;
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		v.push_back(Edge(a, b));
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < n; i++) {
//		cout << v[i].x << ' ' << v[i].y << '\n';
//	}
//}