#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;
	while (tc--) {
		unordered_map<int,string> um;
		int n;
		cin >> n;
		int Big = -1;
		for (int i = 0; i < n; i++) {
			int cost;
			string str;
			cin >> cost >> str;
			um.insert({ cost,str });
			if (Big < cost)Big = cost;
		}
		cout << um[Big] << '\n';
	}
}