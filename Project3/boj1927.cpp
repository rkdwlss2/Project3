//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	priority_queue<int> pq;
//	while (n--) {
//		int tmp;
//		cin >> tmp;
//		if (tmp != 0) {
//			pq.push(-tmp);
//		}
//		else {
//			if (pq.empty()) {
//				cout << 0 << '\n';
//			}
//			else {
//				cout << -pq.top() << '\n';
//				pq.pop();
//			}
//		}
//	}
//}