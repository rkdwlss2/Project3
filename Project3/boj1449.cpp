//
//#include <iostream>
//
//#include <algorithm>
//
//
//using namespace std;
//
//const int MAX = 1000 + 1;
//
//
//int N, L;
//
//int p[MAX];
//
//bool fix[MAX];
//
//
//int main()
//
//{
//
//	cin >> N >> L;
//
//
//	int cnt = 0;
//
//	for (int i = 0; i < N; ++i)
//
//		cin >> p[i];
//
//
//	// 오름차순 정렬
//
//	sort(p, p + N);
//
//
//	for (int i = 0; i < N; ++i)
//
//	{
//
//		if (fix[p[i]] == false) {
//
//			//위치 부터 위치 + L -1까지 테이프를 붙인다.
//
//			for (int j = p[i]; j < p[i] + L; ++j)
//
//				fix[j] = true;
//
//			// 테이프를 붙일때 
//
//			cnt++;
//
//		}
//
//	}
//
//	cout << cnt << "\n";
//
//	return 0;
//
//}