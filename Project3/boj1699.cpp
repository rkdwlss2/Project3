//#include <iostream>
//#include <cstring>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//int n;
//int cache[317][100001];
//
//int go(int index, int sum) {
//	if (sum == 0)return 0;
//	if (sum < 0)return 987654321;
//	if (index <= 0)return 987654321;
//	int& ret = cache[index][sum];
//	if (ret != -1)return ret;
//	ret = 987654321;
//	return ret = min(go(index,sum-index*index)+1, go(index - 1, sum) );
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	memset(cache, -1, sizeof(cache));
//	int num = sqrt(n);
//	cout << go(num, n) << '\n';
//}