/*#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (true) {
		string tmp;
		cin >> tmp;
		if (tmp == "0")break;
		bool check = true;
		for (int i = 0; i < tmp.size() / 2; i++) {
			if (tmp[i] != tmp[tmp.size() - 1 - i]) {
				check = false;
				break;
			}
		}
		if (check)cout << "yes" << '\n';
		else cout << "no" << '\n';

	}
}*/