//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//int n,m;
//
//int bo[1001][1001];
//
//void destory(int type,int r1,int c1,int r2,int c2,int deg ) {
//    for (int i = r1; i <= r2; i++) {
//        for (int j = c1; j <= c2; j++) {
//            if (type == 1) {
//                bo[i][j] -= deg;
//            }
//            else if (type == 2) {
//                bo[i][j] += deg;
//            }
//        }
//    }
//}
//
//int getAnswer() {
//    int ans = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            if (bo[i][j] > 0)ans++;
//        }
//    }
//    return ans;
//}
//int solution(vector<vector<int>> board, vector<vector<int>> skill) {
//    int answer = 0;
//    n = board.size();
//    m = board[0].size();
//    for (int i = 0; i < board.size(); i++) {
//        for (int j = 0; j < board[i].size(); j++) {
//            bo[i][j] = board[i][j];
//        }
//    }
//    for (int i = 0; i < skill.size(); i++) {
//        int type = skill[i][0];
//        int r1 = skill[i][1];
//        int c1 = skill[i][2];
//        int r2 = skill[i][3];
//        int c2 = skill[i][4];
//        int deg = skill[i][5];
//        destory(type, r1, c1, r2, c2, deg);
//
//    }
//    return getAnswer();
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    vector<vector<int>> bb = {
//        {5,5,5,5,5} ,{5,5,5,5,5},{5,5,5,5,5},{5,5,5,5,5}
//    };
//    vector<vector<int>> sk = { {1, 0, 0, 3, 4, 4},{1, 2, 0, 2, 3, 2},{2, 1, 0, 3, 1, 2},{1, 0, 1, 3, 3, 1} };
//    cout << solution(bb, sk) << '\n';
//
//}