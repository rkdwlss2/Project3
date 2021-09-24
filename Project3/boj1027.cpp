#include <iostream>
#define lli long long int
using namespace std;

lli hight[51];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	lli n;
	cin >> n;
	for (lli i = 0; i < n; i++) {
		cin >> hight[i];
	}
	lli answer = 0;
	for (lli s = 0; s < n; s++) {
		lli cnt = 0;
		for (lli e = 0; e < n; e++) {
			if (s == e)continue;
			lli start = s < e ? s : e;
			lli end = s < e ? e : s;
			lli width = end - start;
			lli height =hight[e]-hight[s];
			bool ok = true;
			for (lli i = start+1; i < end; i++) {
				lli w = i > s ? i - s : s - i;
				lli h = hight[i] - hight[s];
				if (height * w <= h * width) {
					ok = false;
					break;
				}
			}
			if (!ok)continue; 
			cnt++;
		}
		if (answer < cnt)answer = cnt;
	}
	cout << answer << '\n';
}