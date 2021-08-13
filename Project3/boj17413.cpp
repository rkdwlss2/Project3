//#include <iostream>
//#include <string>
//using namespace std;
//
//void printReverse(string str) {
//	for (int i = str.size() - 1; i >= 0; i--) {
//		cout << str[i];
//	}
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	string str;
//	getline(cin, str);
//	bool Ok = false;
//	string tmp = "";
//	for (int i = 0; i < str.size(); i++) {
//		if (str[i] == '<') {
//			printReverse(tmp);
//			tmp = "";
//			Ok = true;
//		}
//		else if (str[i] == ' ') {
//			printReverse(tmp);
//			cout << ' ';
//			tmp = "";
//			continue;
//		}
//		if (Ok == false) {
//			tmp += str[i];
//		}
//		else {
//			cout << str[i];
//		}
//		if (str[i] == '>') {
//			Ok = false;
//		}
//	}
//	printReverse(tmp);
//}