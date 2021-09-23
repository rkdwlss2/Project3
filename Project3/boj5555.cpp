#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int n;  
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		string now = tmp + tmp;
		bool ok = true;
		for (int k = 0; k < 10; k++) {
			ok = true;
			for (int j = 0; j < str.size(); j++) {
				if (now[k + j] != str[j]) {
					ok = false;
					break;
				}
			}
			if (ok)break;
		}
		if (ok)cnt++;
	}
	cout << cnt << '\n';
}