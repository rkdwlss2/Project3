#include <iostream>
using namespace std;
const int MAX = 1e5;

int W;

int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

	cin >> W;
	bool shout = false;
	int l = 1; // 苞芭 个公霸 
	int r = 1; // 泅犁 个公霸 
	while (l <= r && r <= MAX) {
		int G = r * r - l * l;
		if (G < W)
			r++;
		else if (G == W) {
			shout = true;
			cout << r << '\n';
			r++;
		}
		else
			l++;
	}
	if (!shout) cout << -1 << '\n';
	return 0;
}