//#include <iostream>
//#include <cstring>
//using namespace std;
//int n,k;
//
//int arr[16];
//int cache[16][100*26];
//int fac[16];
//string intToString(int num) {
//	string answer = "";
//	while (num > 0){
//		answer += (num % 10+'0');
//		num /= 10;
//	}
//	return answer;
//}
//int gcd(int a, int b) {
//	return b == 0 ? a : gcd(b, a % b);
//}
//bool visited[16];
//int dp(int index,string sum) {
//	if (index == n)return atoi(sum.c_str())==0;
//	int sumToint = atoi(sum.c_str());
//	int& ret = cache[index][sumToint];
//	if (ret != -1)return ret;
//	ret = 0;
//	for (int i = 0; i < n; i++) {
//		if (visited[i])continue;
//		visited[i] = true;
//		int now = arr[i];
//		string nowToStr = intToString(now);
//		string tmp = sum + nowToStr;
//		int divided = atoi(tmp.c_str()) % k;
//		ret+=dp(index + 1, intToString(divided));
//		visited[i] = false;
//	}
//	return ret;
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin>>arr[i];
//	}
//	cin >> k;
//	fac[0] = 1;
//	for (int i = 0; i < n; i++) {
//		fac[i + 1] = fac[i] * (i + 1);
//	}
//	memset(cache, -1, sizeof(cache));
//	int ret = dp(0, "");
//	int g = gcd(ret, fac[n]);
//	cout << ret / g << "/" << fac[n] / g;
//}