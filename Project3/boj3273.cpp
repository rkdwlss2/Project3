#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int k;
	cin >> k;
	sort(arr, arr + n);
	int left = 0;
	int right = n-1;
	int answer = 0;
	int partial_sum = 0;
	while (left < right) {

		partial_sum = arr[left] + arr[right];
		if (partial_sum == k && left != right)answer++;
		if (partial_sum >= k) {
			right--;
		}
		else {
			left++;
		}
	}
	cout << answer << '\n';
}