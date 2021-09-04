#include <iostream>
#include <queue>
#define lli long long int
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	lli n;
	cin >> n;
	priority_queue<lli> pq;
	for (lli i = 0; i < n; i++) {
		for (lli j = 0; j < n; j++) {
			lli tmp;
			cin >> tmp;
			lli Small=-98765432100;
			if (!pq.empty()) {
				Small = -pq.top();
			}
			
			if (Small >= tmp) {
				continue;
			}
			pq.push(-tmp);
			if (pq.size() > n) {
				pq.pop();
			}
			
		}
	}
	lli answer=-pq.top();
	cout << answer << '\n';
}