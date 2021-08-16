#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> ans;
	bool Ok = false;
	for (int i = 0; i < 5; i++) {
		string str;
		cin >> str;
		int n = str.size();
		for (int j = 0; j < n-2; j++) {
			if (str[j] == 'F') {
				if (str[j + 1] == 'B' && str[j + 2] == 'I') {
					ans.push_back(i + 1);
					Ok = true;
					break;
				}
			}
		}
	}
	if (Ok) {
		for (auto i : ans) {
			cout << i << ' ';
		}
		return 0;
	}
	cout << "HE GOT AWAY!" << '\n';
}