//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	for (int i = 0; i < 3; i++) {
//		string str;
//		cin >> str;
//		int big = -1;
//		for (int j = 0; j < 8; j++) {
//			int num = 1;
//			char now = str[j];
//			for (int k = j+1; k < 8; k++) {
//				char next = str[k];
//				if (now == next)num++;
//				else break;
//			}
//			if (num > big)big = num;
//		}
//		cout << big << '\n';
//	}
//	
//
//}