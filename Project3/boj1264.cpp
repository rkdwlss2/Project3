#include <iostream>
#include <string>
using namespace std;
char arr[10] = { 'a','e','i','o','u','A','E','I','O','U'};
int main() {
	while (true) {
		string str;
		getline(cin, str);
		if (str == "#")break;
		int cnt = 0;
		for (int i = 0; i < str.size(); i++) {
			for (int j = 0; j < 10; j++) {
				if (str[i] == arr[j])cnt++;
			}
		}
		cout << cnt << '\n';
	}
}