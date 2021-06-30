#include <iostream>
using namespace std;
int n, m;
char ch[4] = { 'A','C','G','T' };
int board[1001][4];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <m; j++) {
			char tmp;
			cin >> tmp;
			for (int k = 0; k < 4; k++) {
				if (tmp == ch[k])board[j][k]++;
			}
		}
	}
	int Sum = 0;
	for (int i = 0; i < m; i++) {
		int big = -1;
		for (int j = 0; j < 4; j++) {
			if (board[i][j] > big)big = board[i][j];
		}
		bool check = false;
		for (int j = 0; j < 4; j++) {
			if (big == board[i][j]&&check==false) {
				cout << ch[j];
				check = true;
				continue;
			}else{
				Sum += board[i][j];
			}
		}
	}
	cout << '\n';
	cout << Sum;
}