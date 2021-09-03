//#include <iostream>
//using namespace std;
//
//int main() {
//	int arr[3];
//	int Big = -1;
//	for (int i = 0; i < 3; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < 3; i++) {
//		if (arr[i] > Big)Big = arr[i];
//	}
//	if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[0]) {
//		cout << 10000 + arr[0] * 1000 << '\n';
//	}
//	else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[0]) {
//		cout << Big * 100 << '\n';
//	}
//	else {
//		int Cnt = 0;
//		int Small = -1;
//		for (int i = 0; i < 3; i++) {
//			if (arr[i] == Big)Cnt++;
//			else Small = arr[i];
//		}
//		if (Cnt == 2) {
//			cout << 1000 + Big * 100 << '\n';
//		}
//		else {
//			cout << 1000 + Small * 100 << '\n';
//		}
//	}
//}