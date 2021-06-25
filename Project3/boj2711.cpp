#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		string str;
		cin >> str;
		for (int i = 1; i <= str.size(); i++) {
			if (i == n)continue;
			cout << str[i-1];
		}
		cout << '\n';
	}
}