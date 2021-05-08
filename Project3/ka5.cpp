//#include <string>
//#include <vector>
//#include <iostream>
//#include <queue>
//#define INF 987654321
//using namespace std;
//
//vector<pair<int, int>> graph[1001];
//vector<pair<int, int>> graph2[1001];
//int d[1001];
//int trap11[1001];
//bool tra = false;
//int s, e;
//
//void dijstra(int start) {
//    priority_queue<pair<int, pair<int, int>>> pq;
//    pq.push({ 0,{start,0} });
//    d[start] = 0;
//    while (!pq.empty()) {
//        int dist = -pq.top().first;
//        int now = pq.top().second.first;
//        int rev = pq.top().second.second;
//        pq.pop();
//        if (d[now] < dist)continue;
//        if (rev == 0) {
//            for (int i = 0; i < graph[now].size(); i++) {
//                int cost = dist + graph[now][i].second;
//                int next = graph[now][i].first;
//                int che = trap11[next];
//                if (che == 1) {
//                    che = che;
//                }
//                else {
//                    che = 0;
//                }
//                if (cost < d[next]) {
//                    d[next] = cost;
//                    pq.push({ -cost,{next,che} });
//                }
//            }
//        }
//        else {
//            for (int i = 0; i < graph2[now].size(); i++) {
//                int cost = dist + graph2[now][i].second;
//                int next = graph2[now][i].first;
//                bool che = trap11[next];
//                if (che == 1) {
//                    che = che;
//                }
//                else {
//                    che = 0;
//                }
//                if (cost < d[next]) {
//                    d[next] = cost;
//                    pq.push({ -cost,{next,che} });
//                }
//            }
//        }
//
//    }
//}
//
//int solution(int n, int start, int end, vector<vector<int>> roads, vector<int> traps) {
//    int answer = 0;
//    s = start;
//    e = end;
//    for (auto i : traps) {
//        trap11[i] = true;
//    }
//    for (int i = 0; i < roads.size(); i++) {
//        int a = roads[i][0];
//        int b = roads[i][1];
//        int c = roads[i][2];
//        graph[a].push_back({ b,c });
//        graph2[b].push_back({ a,c });
//    }
//    fill(d, d + 1001, INF);
//    dijstra(start);
//    return d[end];
//}
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n = 4;
//    int start = 1;
//    int end = 4;
//    vector<vector<int>> roads = { {1, 2, 1},{3, 2, 1},{2, 4, 1} };
//    vector<int> traps = { 2,3 };
//    int result = 5;
//    cout << solution(n, start, end, roads, traps) << '\n';
//}