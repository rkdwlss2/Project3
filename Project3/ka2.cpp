//#include <string>
//#include <vector>
//#include <queue>
//#include <cstring>
//#include <iostream>
//using namespace std;
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//int board[6][6];
//int visited[6][6];
//
//bool bfs(int sx, int sy) {
//    queue<pair<int, int>> q;
//    q.push({ sx,sy });
//    visited[sx][sy] = 1;
//    while(!q.empty()){
//        auto now = q.front(); q.pop();
//        int x = now.first;
//        int y = now.second;
//        for (int dir = 0; dir < 4; dir++) {
//            int nx = x + dx[dir];
//            int ny = y + dy[dir];
//            if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5)continue;
//            if (visited[nx][ny] >= 1 || board[nx][ny] == 1)continue;
//            visited[nx][ny] = visited[x][y]+1;
//            if (visited[nx][ny] <= 3 && board[nx][ny] == 2) {
//                return true;
//            }
//            q.push({ nx,ny });
//        }
//    }
//    return false;
//}
//
//vector<int> solution(vector<vector<string>> places) {
//    vector<int> answer;
//
//    for (int i = 0; i < places.size(); i++) {
//        vector<pair<int, int>> v;
//        for (int j = 0; j < places[0].size(); j++) {
//            for (int k = 0; k < 5; k++) {
//                if (places[i][j][k] == 'P') {
//                    board[j][k] = 2;
//                    v.push_back({ j,k });
//                }
//                else if (places[i][j][k] == 'X') {
//                    board[j][k] = 1;
//                }
//                else {
//                    board[j][k] = 0;
//                }
//            }
//        }
//        bool ch = false;
//        for (auto i : v) {
//            int stx = i.first;
//            int sty = i.second;
//            memset(visited, 0, sizeof(visited));
//            if (bfs(stx, sty)) {
//                answer.push_back(0);
//                ch = true;
//                break;
//            }
//        }
//        if (ch == false) {
//            answer.push_back(1);
//        }
//    }
//    
//    
//    return answer;
//}
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    vector<vector<string>> a = {
//        {"POOOP", "OXXOX", "OPXPX", "OOXOX", "POXXP"},{"POOPX", "OXPXP", "PXXXO", "OXXXO", "OOOPP"},{"PXOPX", "OXOXP", "OXPXX", "OXXXP", "POOXX"},{"OOOXX", "XOOOX", "OOOXX", "OXOOX", "OOOOO"},{"PXPXP", "XPXPX", "PXPXP", "XPXPX", "PXPXP"}
//    };
//    solution(a);
//
//}