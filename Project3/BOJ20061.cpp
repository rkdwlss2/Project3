//#include <iostream>
//#include <algorithm>
//using namespace std;
//int answer = 0;
//int board[11][11];
//int dx[5] = { 0,0,1,-1,0 };
//int dy[5] = { 1,-1,0,0 ,0 };
//
//bool rowCheck(int x, int y, int mod) {
//	int sum = 0;
//	for (int i = 0; i < 4; i++) {
//		if (mod == 0)sum += board[x][i];
//		else sum += board[i][y];
//	}
//	if (sum == 4)return true;
//	return false;
//}
//void clear(int x, int y, int mod) {
//	for (int i = 0; i < 4; i++) {
//		if (mod == 0)board[x][i] = 0;
//		else board[i][y] = 0;
//	}
//}
//void Change(int row, int below, int mod) {
//	int tmpB[5][5];
//	int cnt = 0;
//	for (int i = 6; i <= row; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (mod == 0)tmpB[i - 6][j] = board[i][j];
//			else tmpB[j][i - 6] = board[j][i];
//		}
//		cnt++;
//	}
//	for (int i = below - cnt + 1; i <= below; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (mod == 0)board[i][j] = tmpB[i - (below - cnt + 1)][j];
//			else board[j][i] = tmpB[j][i - (below - cnt + 1)];
//		}
//	}
//}
//int CountGB() {
//	int ans = 0;
//	for (int i = 6; i <= 9; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (board[i][j] == 1)ans++;
//			if (board[j][i] == 1)ans++;
//		}
//	}
//	return ans;
//}
//
//void Move(int x, int y, int typ, int mod) {
//	int x2 = x;
//	int y2 = y;
//	int dir, dir2;
//	if (mod == 0 && typ == 0) {
//		dir = 2;
//		dir2 = 2;
//	}
//	else if (typ == 0 && mod == 1) {
//		dir = 0;
//		dir2 = 0;
//	}
//	else if (typ == 1 && mod == 0) {
//		dir = 2;
//		dir2 = 2;
//		y2 = y + 1;
//	}
//	else if (typ == 1 && mod == 1) {
//		dir = 0;
//		dir2 = 0;
//		y2 = y + 1;
//	}
//	else if (typ == 2 && mod == 0) {
//		dir = 2;
//		dir2 = 2;
//		x2 = x + 1;
//	}
//	else if (typ == 2 && mod == 1) {
//		dir = 0;
//		dir2 = 0;
//		x2 = x + 1;
//	}
//	while (true) {
//
//		int nx = x + dx[dir];
//		int ny = y + dy[dir];
//		int nx2 = x2 + dx[dir2];
//		int ny2 = y2 + dy[dir2];
//		if ((nx2 < 0 || nx2 >= 10 || ny2 < 0 || ny2 >= 10) || (nx < 0 || nx >= 10 || ny < 0 || ny >= 10) || (board[nx][ny] == 1 || board[nx2][ny2] == 1)) {
//			board[x][y] = 1;
//			board[x2][y2] = 1;
//			int xMin = max(x, x2);
//			int yMin = max(y, y2);
//			int cntRow = 0;
//			if (mod == 0) {
//				bool chk = false;
//				if (rowCheck(xMin, 0, mod)) {
//					clear(xMin, 0, mod);
//					cntRow += 1;
//					answer += 1;
//					chk = true;
//				}
//				if (xMin - 1 >= 6 && rowCheck(xMin - 1, 0, mod)) {
//					clear(xMin - 1, 0, mod);
//					cntRow += 2;
//					answer += 1;
//				}
//				if (cntRow == 3) {
//					Change(xMin - 2, xMin, mod);
//					clear(6, 0, mod);
//					clear(7, 0, mod);
//				}
//				else if (cntRow == 1) {
//					Change(xMin - 1, xMin, mod);
//					clear(6, 0, mod);
//				}
//				else if (cntRow == 2) {
//					Change(xMin - 2, xMin - 1, mod);
//					clear(6, 0, mod);
//				}
//				if (xMin == 6 && typ == 2 && chk == false) {
//					clear(5, 0, mod);
//					Change(8, 9, mod);
//					clear(6, 0, mod);
//					board[x + 1][ny] = 1;
//					board[x2 + 1][ny2] = 1;
//				}
//				else if (xMin == 6 && typ == 2 && chk == true){
//					board[x + 1][ny] = 1;
//					board[x2 + 1][ny2] = 1;
//					clear(5, 0, mod);
//				}
//				if (xMin <= 5) {
//					if (typ == 2) {
//						clear(5, 0, mod);
//						clear(4, 0, mod);
//						Change(7, 9, mod);
//						clear(6, 0, mod);
//						clear(7, 0, mod);
//						board[x + 2][ny] = 1;
//						board[x2 + 2][ny2] = 1;
//					}
//					else {
//						clear(5, 0, mod);
//						Change(8, 9, mod);
//						clear(6, 0, mod);
//						board[x + 1][ny] = 1;
//						board[x2 + 1][ny2] = 1;
//					}
//				}
//			}
//			else {
//				bool chk = false;
//				if (rowCheck(0, yMin, mod)) {
//					clear(0, yMin, mod);
//					cntRow += 1;
//					answer += 1;
//					chk = true;
//				}
//				if (yMin - 1 >= 6 && rowCheck(0, yMin - 1, mod)) {
//					clear(0, yMin - 1, mod);
//					cntRow += 2;
//					answer += 1;
//				}
//				if (cntRow == 3) {
//					Change(yMin - 2, yMin, mod);
//					clear(0, 6, mod);
//					clear(0, 7, mod);
//				}
//				else if (cntRow == 1) {
//					Change(yMin - 1, yMin, mod);
//					clear(0, 6, mod);
//				}
//				else if (cntRow == 2) {
//					Change(yMin - 2, yMin - 1, mod);
//					clear(0, 6, mod);
//				}
//				if (yMin == 6 && typ == 1&&chk==false) {
//					clear(0, 5, mod);
//					Change(8, 9, mod);
//					clear(0, 6, mod);
//					board[nx][y + 1] = 1;
//					board[nx2][y2 + 1] = 1;
//				}
//				else if(yMin == 6 && typ == 1 && chk == true) {
//					board[nx][y + 1] = 1;
//					clear(0, 5, mod);
//				}
//				if (yMin <= 5) {
//					if (typ == 1) {
//						clear(0, 5, mod);
//						clear(0, 4, mod);
//						Change(7, 9, mod);
//						clear(0, 6, mod);
//						clear(0, 7, mod);
//						board[nx][y + 2] = 1;
//						board[nx2][y2 + 2] = 1;
//					}
//					else {
//						clear(0, 5, mod);
//						Change(8, 9, mod);
//						clear(0, 6, mod);
//						board[nx][y + 1] = 1;
//						board[nx2][y2 + 1] = 1;
//					}
//				}
//			}
//			break;
//		}
//		x = nx;
//		y = ny;
//		x2 = nx2;
//		y2 = ny2;
//	}
//}
//void Remove() {
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			board[i][j] = 0;
//		}
//	}
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int tc;
//	cin >> tc;
//	for (int i = 0; i < tc; i++) {
//		int Typ, r, c;
//		cin >> Typ >> r >> c;
//
//		Move(r, c, Typ - 1, 0);
//		Remove();
//		Move(r, c, Typ - 1, 1);
//		Remove();
//	/*	cout << "i : " << i << '\n';
//		cout << "down : " << '\n';
//		for (int i = 0; i <= 9; i++) {
//			for (int j = 0; j <= 9; j++) {
//				cout << board[i][j] << ' ';
//			}cout << '\n';
//		}*/
//
//	}
//	cout << answer << '\n';
//	cout << CountGB();
//
//}
