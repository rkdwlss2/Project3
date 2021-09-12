//#include <iostream>
//#include <queue>
//#include <algorithm>
//using namespace std;
//#define MOD 20090711
//int n;
//int arr[200001];
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int tc;
//	cin >> tc;
//	while (tc--) {
//		int a, b;
//		cin >> n >> a >> b;
//		priority_queue<int> Left;
//		priority_queue<int> Right;
//		int sum = 0;
//		arr[0] = 19830;
//		sum += arr[0];
//		Left.push(arr[0]);
//		for (int i = 1; i < n; i++) {
//			arr[i] = (arr[i - 1] * a + b) % MOD;
//			int now = arr[i];
//			int left = Left.top();
//			int right = Right.top();
//			if ((Left.size() + Right.size()) % 2 == 0) {
//				int tmpArr[3];
//				tmpArr[0] = now;
//				tmpArr[1] = left;
//				tmpArr[2] = right;
//				sort(tmpArr, tmpArr + 3);
//				sum += tmpArr[1];
//				Left.pop(); Right.pop();
//				Left.push(tmpArr[0]); Left.push(tmpArr[1]);
//				Right.push(tmpArr[2]);
//			}
//			else if (Right.empty()){
//
//			}
//		}
//	}
//}