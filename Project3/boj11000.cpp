#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<pair<int, int>> v;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	priority_queue<int> pq;
	sort(v.begin(), v.end());
	pq.push(-v[0].second);
	for (int i = 1; i < n; i++) {
		int now = -pq.top();
		int s = v[i].first;
		int l = v[i].second;
		if (now > s) {
			pq.push(-l);
		}
		else {
			pq.pop();
			pq.push(-l);
		}
	}
	cout << pq.size() << '\n';
}