//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//unordered_map<string, int> um;
//unordered_map<int, string> um2;
//unordered_map<int, int> um3;
//vector<int> graph[10001];
//bool visited[10001];
//vector<string> ans;
//int cnt,cnt2=0;
//
//void dfs(int now) {
//    if (cnt == cnt2)return;
//    int n = graph[now].size();
//    for (int i = 0; i < n; i++) {
//        int next = graph[now][i];
//        if (um3.count(next) == 0) {
//            um3.insert({ next,0 });
//            cnt2++;
//        }
//        dfs(next);
//    }
//    ans.push_back(um2[now]);
//}
//
//vector<string> solution(vector<vector<string>> tickets) {
//    vector<string> answer;
//    cnt = 0;
//    for (int i = 0; i < tickets.size(); i++) {
//        string a = tickets[i][0];
//        string b = tickets[i][1];
//        int intA,intB;
//        if (um.count(a) == 0) {
//            um.insert({ a,cnt });
//            um2.insert({ cnt,a });
//            intA = cnt;
//            cnt++;
//        }
//        else {
//            intA = um[a];
//        }
//        if (um.count(b) == 0) {
//            um.insert({ b,cnt });
//            um2.insert({ cnt,b });
//            intB = cnt;
//            cnt++;
//        }
//        else {
//            intB = um[b];
//        }
//        graph[intA].push_back(intB);
//    }
//    for (int i = 0; i < cnt; i++) {
//        sort(graph[i].begin(), graph[i].end());
//    }
//    ans.push_back("ICN");
//    um3.insert({ um["ICN"],0 });
//    cnt2++;
//    dfs(um["ICN"]);
//    return ans;
//}
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    vector<vector<string>> v =
//    {{"ICN", "SFO"}, { "ICN", "ATL" }, { "SFO", "ATL" }, { "ATL", "ICN"
//}, { "ATL", "SFO"
//}};
//    vector<string> rn=solution(v);
//    for (auto i : rn) {
//        cout << i << ' ';
//    }
//}