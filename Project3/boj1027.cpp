#include <iostream>
using namespace std;

int hight[51];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> hight[i];
	}
	int answer = 0;
	for (int s = 0; s < n; s++) {
		int cnt = 0;
		for (int e = 0; e < n; e++) {
			if (s == e)continue;
			int start = s < e ? s : e;
			int end = s < e ? e : s;
			int width = end - start;
			int height =hight[e]-hight[s];
			bool ok = true;
			for (int i = start+1; i < end; i++) {
				int w = i > s ? i - s : s - i;
				int h = hight[i] - hight[s];
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