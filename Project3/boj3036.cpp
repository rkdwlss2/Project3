//#include <iostream>
//using namespace std;
//int gcd(int a, int b) {
//	if (a == 0)return b;
//	return gcd(b % a, a);
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//
//	int n;
//	cin >> n;
//	int firstRing;
//	cin >> firstRing;
//	for (int i = 0; i < n - 1; i++) {
//		int tmp;
//		cin >> tmp;
//		int g = gcd(firstRing, tmp);
//		cout << firstRing / g << '/' << tmp / g << '\n';
//	}
//}