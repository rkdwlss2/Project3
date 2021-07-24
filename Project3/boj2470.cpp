//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//vector<int> v;
//int anx, any;
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int tmp;
//		cin >> tmp;
//		v.push_back(tmp);
//	}
//	sort(v.begin(), v.end());
//	int left = 0;
//	int right = n - 1;
//	anx = v[left];
//	any = v[right];
//	int answer = (anx + any > 0) ? (anx + any) : (any + anx);
//	while (left < right) {
//		
//		int ax = v[left];
//		int ay = v[right];
//		int now= (ax + ay);
//		if (abs(now) < abs(answer)) {
//			answer = now;
//			anx = ax;
//			any = ay;
//		}
//		if (now > 0) {
//			right--;
//		}
//		else {
//			left++;
//		}
//
//	}
//	cout << anx <<" "<< any << '\n';
//}