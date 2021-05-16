//#include <iostream>
//#include <vector>
//using namespace std;
//
//long long countMoves(vector<int>& A, int left, int right) {
//	if (left == right)return 0;
//	int mid = (left + right) / 2;
//	long long ret = countMoves(A, left, mid) + countMoves(A, mid + 1, right);
//	vector<int> tmp(right - left + 1);
//	int tmpIndex = 0, leftIndex = left, rightIndex = mid + 1;
//	while (leftIndex <= mid || rightIndex <= right) {
//		if (leftIndex <= mid && (rightIndex > right || A[leftIndex] <= A[rightIndex])) {
//			tmp[tmpIndex++] = A[leftIndex++];
//		}
//		else {
//			ret += mid - leftIndex + 1;
//			tmp[tmpIndex++] = A[rightIndex++];
//		}
//	}
//	for (int i = 0; i < tmp.size(); ++i) {
//		A[left + i] = tmp[i];
//	}
//	return ret;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	int n;
//	cin >> n;
//	vector<int> a;
//	for (int i = 0; i < n; i++) {
//		int tmp;
//		cin >> tmp;
//		a.push_back(tmp);
//	}
//	cout << countMoves(a, 0, n - 1) << '\n';
//}