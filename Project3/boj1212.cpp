#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
vector<int> tmp;
void go(int index,int num) {
	if (index == 0) {
		for (int i = 2; i >= 0; i--) {
			v.push_back(tmp[i]);
		}
		for (int i = 0; i < 3; i++)tmp.pop_back();
		return;
	}
	tmp.push_back(num%2);
	go(index-1,num / 2);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	cin >> str;
	if (str == "0") {
		cout << 0 << '\n';
		return 0;
	}
	for (int i = 0;  i < str.size(); i++) {
		go(3,str[i]-'0');
	}
	bool ok = false;
	for (auto i : v) {
		if (ok == false && i == 0)continue;
		else {
			ok = true;
			cout << i;
		}
	}
}