#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n = 10;
int num;
int arr[10];
vector<int> v;
vector<int> v2;
bool visited[10];
int big = 99999999999;
void go(int index,int prev) {
	if (index == num) {
		int sum = 0;
		for (auto i : v)
		{
			sum += arr[i];
		}
		int now = (sum - 100 > 0) ? (sum - 100) : (100 - sum);
		v2.push_back(sum);
		if (big > now)big = now;
		return;
	}
	for (int i = prev+1; i < n; i++) {
		if (visited[i])continue;
		visited[i] = true;
		v.push_back(i);
		go(index + 1, i);
		visited[i] = false;
		v.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	bool Ok = false;
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
		int right = sum - 100;
		int left = 100 - (sum - arr[i]);
		if (sum >= 100) {
			Ok = true;
			if (left < right) {
				cout << sum - arr[i] << '\n';
			}
			else {
				cout << sum << '\n';
			}
			break;
		}
	}
	if (!Ok)cout << sum << '\n';

}