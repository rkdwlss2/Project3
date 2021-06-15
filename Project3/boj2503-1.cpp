//#include <iostream>
//#include <vector>
//using namespace std;
//int n;
//
//int arr[101][3];
//bool visited[10];
//vector<int> v;
//int answer = 0;
//void go(int index) {
//	if (index == 3){
//		int Sum = 0;
//		for (int i = 0; i < n; i++) {
//			int strike = 0;
//			int ball = 0;
//			int num = arr[i][0];
//			int numCheck[11];
//			int numCheck2[11];
//			fill(numCheck, numCheck + 11, 0);
//			fill(numCheck2, numCheck2 + 11, 0);
//			int tmp1 = num;
//			int tmp2 = num;
//			for (int j = 0; j < 3; j++) {
//				int tmp = tmp1 % 10;
//				tmp1 = tmp1 / 10;
//				if (tmp == v[j])strike++;
//				else {
//					numCheck[tmp]++;
//					numCheck2[v[j]]++;
//				}
//			}
//			for (int j = 1; j < 10; j++) {
//				if (numCheck[j] == 1 && numCheck2[j] == 1)ball++;
//			}
//			if (strike == arr[i][1] && ball == arr[i][2])Sum++;
//		}
//		if (Sum == n)answer++;
//		return;
//	}
//	for (int i = 1; i < 10; i++) {
//		if (visited[i])continue;
//		visited[i] = true;
//		v.push_back(i);
//		go(index + 1);
//		v.pop_back();
//		visited[i] = false;
//	}
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	go(0);
//	cout << answer << '\n';
//
//
//}