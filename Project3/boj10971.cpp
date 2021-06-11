#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
#define INF 987654321
int n;
int first;
int cache[17][1 << 17 + 1];
int graph[17][17];
int tsp(int last, int visited) {
	if (((1 <<n )- 1) == visited) {
		if (graph[last][first]< INF) {
			return graph[last][first];
		}
		return INF;
	}
	int& ret = cache[last][visited];
	if (ret != -1) return ret;
	ret = INF;
	for (int i = 0; i <n; i++) {
		if (((1 << i) & visited)||graph[last][i]==987654321)continue;
		ret=min(ret,tsp(i , visited | (1 << i))+graph[last][i]);
	}
	return ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int tmp;
			cin >> tmp;
			if (tmp == 0)tmp = INF;
			graph[i][j] = tmp;
		}
	}
	int ans = INF;
	
	for (int i = 0; i < n; i++) {
		memset(cache, -1, sizeof(cache));
		first = i;
		ans = min(ans, tsp(i,1<<i));
	}
	cout << ans << '\n';
	
}