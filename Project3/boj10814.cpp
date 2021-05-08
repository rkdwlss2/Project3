//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Edge {
//	int age;
//	int num;
//	string name;
//	Edge(int _age, int _num, string _name) :age(_age), num(_num), name(_name) {}
//	bool operator < (Edge a) {
//		if (age == a.age) {
//			if (num < a.num)return true;
//			else return false;
//		}
//		else if (age < a.age)return true;
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
//		int age;
//		string name;
//		cin >> age >> name;
//		v.push_back(Edge(age, i, name));
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < n; i++) {
//		cout << v[i].age << ' ' << v[i].name << '\n';
//	}
//}