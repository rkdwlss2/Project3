#include <iostream>
#include <string>

using namespace std;

string arr[13] = { "A+","A0","A-","B+","B0","B-","C+","C0","C-","D+","D0","D-","F" };
int score[13] = { 43,40,37,33,30,27,23,20,17,13,10,7,0 };
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	if (str == "D-") {
		cout << 0 << '.' << 7 << '\n';
	}
	else if (str == "F") {
		cout << 0 << '.' << 0 << '\n';
	}
	else {
		for (int i = 0; i < 13; i++) {
			if (str == arr[i]) {
				cout << score[i] / 10 << '.' << score[i] % 10 << '\n';
				break;
			}
		}
	}
}