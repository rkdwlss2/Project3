#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
int leng;
string str;
int answer = -1;
int cache[1000001][11];
int  go(int index) {

	if (index == n) {
		return stoi(str);
	}
	int& ret = cache[stoi(str)][index];
	if (ret != -1)return ret;
	for (int i = 0; i < leng-1; i++) {
		for (int j = i + 1; j < leng; j++) {
			int tmp = str[j];
			str[j] = str[i];
			str[i] = tmp;
			ret=max(ret,go(index + 1));
			tmp = str[j];
			str[j] = str[i];
			str[i] = tmp;
		}
	}
	return ret;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> str >> n;
	leng = str.size();
	memset(cache, -1, sizeof(cache));
	cout << go(0) << '\n';
}