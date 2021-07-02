#include <iostream>
#include <string>
using namespace std;
char arr[9] = { 'C','A','M','B','R','I','D','G','E' };
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		bool ok = false;
		for (int j = 0; j < 9; j++) {
			if (str[i] == arr[j]) {
				ok = true;
			}
		}
		if (!ok)cout << str[i];
	}

}