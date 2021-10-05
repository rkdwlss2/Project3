//#include <iostream>
//#include <vector>
//using namespace std;
//int n, r, q;
//int subtree[100001];
//vector<int> graph[100001];
//bool visited[100001];
//
//int go(int prev) {
//	int sum = 0;
//	bool check = false;
//	for (int i = 0 ; i <graph[prev].size();i++){
//		int next = graph[prev][i];
//		if (visited[next] == true)continue;
//		visited[next] = true;
//		sum += go(next);
//		check = true;
//	}
//	if (!check)return 1;
//	subtree[prev] = sum;
//	return 1 + sum;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> r >> q;
//	for (int i = 0; i < n-1; i++) {
//		int a, b;
//		cin >> a >> b;
//		graph[a].push_back(b);
//		graph[b].push_back(a);
//	}
//	visited[r] = true;
//	go(r);
//	for (int i = 0; i < q; i++) {
//		int s;
//		cin >> s;
//		cout << subtree[s] + 1 << '\n';
//	}
//}