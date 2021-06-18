#include <iostream>
#include <string>
using namespace std;

string Big[10] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };

int Find(string str) {
	for (int i = 0; i < 10; i++) {
		if (Big[i] == str) {
			return i;
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int num = 0;
	string tmp;
	cin >> tmp;
	
	string tmp2;
	cin >> tmp2;
	if (tmp == "black" && tmp2 == "black") {
		cout << 0;
		return 0;
	}
	num = Find(tmp) * 10 + Find(tmp2);
	cout << num;
	string tmp3;
	cin >> tmp3;
	for (int i = 0; i < Find(tmp3); i++) {
		cout << '0';
	}
}