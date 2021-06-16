#include <iostream>
#include <string>
using namespace std;
int arr[51][28];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int length = -1;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		length=tmp.size();
		for (int j = 0; j < tmp.size(); j++) {
			if (tmp[j] == '.') {
				arr[j][27]++;
				continue;
			}
			arr[j][tmp[j] - 'a']++;
		}
	}
	for (int i = 0; i < length; i++) {
		bool ok = false;
		for (int j = 0; j < 26; j++) {
			if (arr[i][j] == n) {
				char Out = j + 'a';
				cout << Out;
				ok = true;
			}
		}
		if (arr[i][27] == n) {
			cout << '.';
			ok = true;
		}
		if (!ok)cout << '?';
	}
}