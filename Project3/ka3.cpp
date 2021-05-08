//#include <iostream>
//#include <queue>
//#include <string>
//#include <vector>
//#include <stack>
//using namespace std;
//int N,K;
//pair<int, int> po[1000001];
//bool arr[1000001];
//
//string solution(int n, int k, vector<string> cmd) {
//	string answer = "";
//	N = n-1;
//	K = k;
//	stack<int> st;
//	for (int i = 0; i < cmd.size(); i++) {
//		if (cmd[i][0] == 'D') {
//			int num = cmd[i][2]-'0';
//			for (int aa = 3; aa < cmd[i].size(); aa++) {
//				num *= 10;
//				num += (cmd[i][aa] - '0');
//			}
//			while (true) {
//				K++;
//				if (arr[K] == false)num--;
//				if (num == 0)break;
//			}
//		}
//		else if (cmd[i][0] == 'U') {
//			int num = cmd[i][2] - '0';
//			for (int aa = 3; aa < cmd[i].size(); aa++) {
//				num *= 10;
//				num += (cmd[i][aa] - '0');
//			}
//			while (true) {
//				K--;
//				if (arr[K] == false)num--;
//				if (num == 0)break;
//			}
//		}
//		else if (cmd[i][0] == 'C') {
//			arr[K] = true;
//			st.push(K);
//			if (K == N) {
//				while (true) {
//					K--;
//					if (arr[K] == false)break;
//				}
//				N = K;
//			}
//			else {
//				while (true) {
//					K++;
//					if (arr[K] == false)break;
//				}
//			}
//		}
//		else if (cmd[i][0] == 'Z') {
//			int index = st.top(); st.pop();
//			arr[index] = false;
//			if (index > N)N = index;
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		if (arr[i])answer += 'X';
//		else answer += 'O';
//	}
//	return answer;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	vector<string> a = { "D 113","D 2","C","C","U 2","C","Z","Z" };
//	cout << solution(8, 2, a) << '\n';
//
//}