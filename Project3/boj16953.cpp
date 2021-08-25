#include <iostream>
#include <queue>
#define lli long long int
using namespace std;
lli m, k;

void bfs() {
	queue<pair<lli, lli>> q;
	q.push({ m,0 });
	while (!q.empty()) {
		auto now = q.front(); q.pop();
		if (now.first == k) {
			cout << now.second + 1 << '\n';
			exit(0);
		}
		if (now.first * 2 <= k) {
			q.push({ now.first * 2,now.second + 1 });
		}
		if (now.first * 10+1 <= k) {
			q.push({ now.first * 10+1,now.second + 1 });
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> m >> k;
	bfs();
	cout << -1;
}