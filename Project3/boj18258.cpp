//#include <iostream>
//#include <string>
//using namespace std;
//int q[2000001];
//int First = 0;
//int End = 0;
//string strA[6] = { "push","pop","size","empty","front","back" };
//int Size() {
//	cout << End - First << '\n';
//	return End - First;
//}
//bool Empty() {
//	if (First - End == 0) {
//		cout << 1 << '\n';
//		return true;
//	}
//	else {
//		cout << 0 << '\n';
//		return false;
//	}
//}
//void push(int num) {
//	q[End++] = num;
//}
//void Front() {
//	if (End-First==0) {
//		cout << -1 << '\n';
//		return;
//	}
//	cout<<q[First]<<'\n';
//}
//void Back() {
//	if (End - First == 0) {
//		cout << -1 << '\n';
//		return;
//	}
//	cout << q[End-1] << '\n';
//}
//
//void Pop() {
//	if (End - First == 0) {
//		cout << -1 << '\n';
//		return;
//	}
//	cout << q[First++] << '\n';
//}
//
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	while (n--) {
//		string str;
//		cin >> str;
//		if (strA[0] == str) {
//			int num;
//			cin >> num;
//			push(num);
//		}
//		else if (strA[1] == str) Pop();
//		else if (strA[2] == str) Size();
//		else if (strA[3] == str)Empty();
//		else if (strA[4] == str)Front();
//		else Back();
//
//	}
//}