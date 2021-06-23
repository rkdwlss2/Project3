#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	int pre = -1;
	int sum = 0;
	for (int i = 0; i < str.size(); i++) {
		int now = (str[i] == '(') ? 1 : 2;
		if (now == pre) {
			sum += 5;
		}
		else {
			sum += 10;
		}
		pre = (str[i] == '(') ? 1 : 2;
	}
	cout << sum << '\n';
}