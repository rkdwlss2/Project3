//#include <iostream>
//#include <string>
//#include <vector>
//#include <queue>
//using namespace std;
//vector<int> inFo;
//vector<int> edge[17];
//int n;
//int visited[18];
//vector<int> v;
//void go(int index) {
//    if (index == n) {
//        for (auto i : v) {
//            cout << i << ' ';
//        }
//        cout << '\n';
//        return;
//    }
//    for (int i = 0; i < n; i++) {
//        if (visited[i])continue;
//        visited[i] = true;
//        v.push_back(i);
//        go(index+1);
//        v.pop_back();
//        visited[i] = false;
//    }
//}
//int visited2[17];
//void bfs(int sx,int ly) {
//    queue<pair<int, pair<int,int>>> q;
//    visited2[sx] = true;
//    if (inFo[sx] == 1) {
//        q.push({ sx,{ 0,1 } });
//    }
//    else {
//        q.push({ sx,{ 1,0 } });
//    }
//    while (!q.empty()) {
//        auto tmp = q.front(); q.pop();
//        int wolfs = tmp.second.second;
//        int pigs = tmp.second.first;
//        int now = tmp.first;
//        for (int i = 0; i < edge[now].size(); i++) {
//            int next = edge[now][i];
//            if (visited2[next])continue;
//            visited2[next] = true;
//            if (inFo[next] == 1) {
//                q.push({ next,{pigs,wolfs + 1} });
//            }
//            else {
//                q.push({ next,{pigs+1,wolfs } });
//            }
//            if (next == ly) {
//
//                return;
//            }
//        }
//    }
//}
//
//int solution(vector<int> info, vector<vector<int>> edges) {
//    int answer = 0;
//    n = info.size();
//    inFo = info;
//    for (int i = 0; i < edges.size(); i++) {
//        int a = edges[i][0];
//        int b = edges[i][1];
//        edge[a].push_back(b);
//        edge[b].push_back(a);
//    }
//    return answer;
//}
//int main() {
//    n = 5;
//    go(0);
//}