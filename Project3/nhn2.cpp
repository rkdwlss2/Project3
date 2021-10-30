//#include <iostream>
//#include <unordered_map>
//#include <string>
//#include <vector>
//using namespace std;
//
//
//
//int main() {
//	int tc;
//	cin >> tc;
//	while (tc--) {
//		int n, m;
//		cin >> n >> m;
//		int num = 0;
//		vector<string> v;
//		unordered_map<string, int> um;
//		for (int i = 0; i < n; i++) {
//			string tmp;
//			cin >> tmp;
//			v.push_back(tmp);
//		}
//		for (int i = 0; i < n; i++){
//			string tmp = v[i];
//			if (um.count(tmp) > 0) {
//				continue;
//			}
//			else {
//				um.insert({ tmp,0 });
//				num++;
//			}
//			if (num == m) {
//				cout << i + 1 << '\n';
//				break;
//			}
//		}
//		
//	}
//}