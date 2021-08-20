//#include <string>
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int dx[3] = { -1, 1, 2 };
//int board[200001];
//int parent[200001];
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//
//    int N, K;
//    cin >> N >> K;
//    queue<int> q;
//    q.push(N);
//    board[N] = 1;
//    parent[N] = N;
//    if (N == K) {
//        cout << 0 << '\n';
//        cout << N << '\n';
//        return 0;
//    }
//    while (!q.empty())
//    {
//        int cur = q.front(); q.pop();
//        for (int i = 0; i < 3; i++)
//        {
//            int nx;
//            if (i != 2) nx = cur + dx[i];
//            else nx = cur * dx[i];
//            if (nx < 0 || nx >= 200000 || board[nx]) continue;
//            q.push(nx);
//            board[nx] = board[cur] + 1;
//            parent[nx] = cur;
//            if (nx == K) {
//                cout << board[nx] - 1 << '\n';
//                int value = K;
//                vector<int> answer;
//                while (true)
//                {
//                    if (value != N) {
//                        answer.push_back(value);
//                        value = parent[value];
//                    }
//                    else {
//                        answer.push_back(N);
//                        break;
//                    }
//                }
//                reverse(answer.begin(), answer.end());
//                for (auto a : answer) cout << a << ' ';
//                return 0;
//            }
//        }
//    }
//    return 0;
//}