#include <iostream>
#include <string>
using namespace std;
int alpha[26];
int main() {
	while (true) {
		string str;
		getline(cin, str);
		if (str == "")break;
		for (int i = 0; i < str.size(); i++) {
			char tmp = str[i];
			if (tmp >= 'a' && tmp <= 'z')alpha[tmp - 'a']++;
		}

	}
	int Big = -1;
	for (int i = 0; i < 26; i++) {
		if (Big < alpha[i])Big = alpha[i];
	}
	for (int i = 0; i < 26; i++) {
		if (Big == alpha[i]) {
			char now = 'a' + i;
			cout << now;
		}
		
	}
}