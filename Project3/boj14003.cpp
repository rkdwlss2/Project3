//#include <iostream>
//#include <stack>
//using namespace std;
//
//int dp[1000001];
//int arr[1000001];
//pair<int, int> track[1000001];
//int lower_bound(int end,int n) {
//	int start = 0;
//	while (start < end) {
//		int mid = (start + end) / 2;
//		if (dp[mid] >= n) {
//			end = mid;
//		}
//		else {
//			start = mid + 1;
//		}
//	}
//	return end;
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin>>arr[i];
//	}
//	dp[0] = arr[0];
//	track[0] = { 0,arr[0] };
//	int idx = 0;
//	for (int i = 1; i < n; i++) {
//		if (dp[idx] < arr[i]) {
//			dp[++idx] = arr[i];
//			track[i] = { idx,arr[i] };
//		}
//		else {
//			int ii = lower_bound(idx, arr[i]);
//			dp[ii] = arr[i];
//			track[i] = { ii,arr[i] };
//		}
//	}
//	stack<int> st;
//	int tmp = idx;
//	for (int i = n - 1; i >= 0; i--) {
//		if (tmp == track[i].first) {
//			st.push(track[i].second);
//			--tmp;
//		}
//	}
//	cout << st.size() << '\n';
//	while (!st.empty()) {
//		cout << st.top() << ' ';
//		st.pop();
//	}
//
//}