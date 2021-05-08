//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Edge {
//	int korean;
//	int english;
//	int math;
//	string name;
//	Edge(int _korean, int _english, int _math, string _name) :korean(_korean), english(_english), math(_math), name(_name) {}
//	bool operator < (Edge a) {
//		if (korean !=a.korean)return korean > a.korean;
//		else  {
//			if (english != a.english)return english < a.english;
//			else {
//				if (math != a.math)return math > a.math;
//				else {
//					if (name < a.name)return true;
//					else return false;
//				}
//			}
//		}
//	}
//};
//vector<Edge> v;
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int korean, english, math;
//		string name;
//		cin >> name >> korean >> english >> math;
//		v.push_back(Edge(korean, english, math, name));
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < n; i++) {
//		cout << v[i].name << '\n';
//	}
//}