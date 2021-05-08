//#include <iostream>
//using namespace std;
//int cache[1001];
//
//int go(int index) {
//	if (index == 0)return 0;
//	if (index == 1)return 1;
//	if (index == 2)return 4;
//
//	int& ret = cache[index];
//	if (ret != -1)return ret;
//	ret = 0;
//	return ret =  go(index - 1)+4*go(index-2) + 3;
//	
//
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	fill(cache, cache + 1001, -1);
//	cout << go(n) << '\n';
//}