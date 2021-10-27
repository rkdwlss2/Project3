#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	unordered_map<string, int> um;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		if (um.count(tmp) > 0) {
			um[tmp]++;
		}
		else {
			um.insert({ tmp,1 });
		}
	}
	vector<pair<int, string>> v;
	for (auto i : um) {
		v.push_back({ i.second,i.first });
	}
	sort(v.begin(), v.end());
	int Big = v[v.size() - 1].first;
	for (int i = 0; i < v.size(); i++) {
		if (v[i].first == Big) {
			cout << v[i].second << '\n';
			return 0;
		}
	}
}