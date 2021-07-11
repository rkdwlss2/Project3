#include <iostream>
using namespace std;
int n, m;
int board[501][501];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> tmp;
		for (int j = n - 1; j > n-1-tmp; j--) {
			board[j][i]=1;
		}
	}
	int Sum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (board[i][j] == 0 && board[i][j - 1] == 1) {
				int plus = 1;
				bool Ok = false;
				while (true) {
					if (plus + j >= m)break;
					if (board[i][j + plus] == 1) {
						Ok = true;
						Sum += plus;
						break;
					}
					plus++;
				}

			}
		}
	}
	cout << Sum << '\n';
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		cout << board[i][j] << ' ';
	//	}
	//	cout << '\n';
	//}
}