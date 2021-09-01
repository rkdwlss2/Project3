//#include <iostream>
//#include <string>
//using namespace std;
//
//
//int now = 0;
//void rotate(int mod) {
//	if (mod == 0) {
//		if (now == 0)now = 1;
//		else if (now == 1)now =0;
//	}
//	else if (mod == 1) {
//		if (now == 1) {
//			now = 2;
//		}
//		else if (now == 2) {
//			now = 1;
//		}
//	}
//	else {
//		if (now == 2)now = 0;
//		else if (now == 0)now = 2;
//	}
//}
//
//int main() {
//	string str;
//	cin >> str;
//	for (int i = 0; i < str.size(); i++) {
//		char tmp = str[i];
//		int now = tmp - 'A';
//		rotate(now);
//	}
//	cout << now + 1 << '\n';
//}