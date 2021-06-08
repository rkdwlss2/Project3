//#include <iostream>
//#include <cstring>
//using namespace std;
//int n;
//
//int cache[31];
//int cache2[31];
//int tiling(int index) {
//	if (index == 0)return 1;
//	int& ret = cache[index];
//	if (ret != -1)return ret;
//	ret = 0;
//	ret += tiling(index - 1);
//	if (index-2<=n)ret += (2*tiling(index - 2));
//	return ret;
//}
//int ast(int index) {
//	if (index <=2)return 0;
//	int& ret = cache2[index];
//	if (ret != -1)return ret;
//	ret = ast(index-2);
//	if (index >= 4)ret += 2*ast(index - 4);
//	ret += (4*tiling(index - 3));
//	ret += (2*tiling(index - 4));
//	return ret;
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	memset(cache, -1, sizeof(cache));
//	memset(cache2, -1, sizeof(cache2));
//	cout <<tiling(n)- ast(n)/2 << '\n';
//}