#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n;

bool Check(vector<char>& str, int Len) {
	bool Ok = true;
	int left = str.size() - 2 * Len;
	int right = str.size() - Len;
	for (int i = 0; i < Len; i++) {
		if (str[left + i] != str[right + i])return false;
	}
	return true;
}

bool go(int index, vector<char>& str) {
	if (index == n) {
		for (auto i : str) {
			cout << i;
		}
		exit(0);
	}
	for (int i = 1; i <= 3; i++) {
		str.push_back('0' + i);
		bool Ok = false;
		for (int j = 1; j <= str.size() / 2; j++) {
			if (Check(str, j )) {
				Ok = true;
				break;
			}
		}
		if (Ok) {
			str.pop_back();
			continue;
		}
		if (go(index + 1, str))return true;
		str.pop_back();
	}
	return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	vector<char> str;
	go(0, str);

}