#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string tmp;
	cin >> tmp;
	int n;
	cin >> n;
	int ans = 0;
	int ten = 1;
	for (int i = tmp.size()-1; i >=0; i--) {
		char charactor = tmp[i];
		if ('0' <= charactor && charactor <= '9') {
			int num = charactor - '0';
			ans += (ten * num);
		}
		else {
			int num = charactor - 'A';
			ans += (ten *( num+10));
		}
		ten *= n;
	}
	cout << ans << '\n';
}