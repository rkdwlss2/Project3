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
//	// �������� ����
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
//			//��ġ ���� ��ġ + L -1���� �������� ���δ�.
//
//			for (int j = p[i]; j < p[i] + L; ++j)
//
//				fix[j] = true;
//
//			// �������� ���϶� 
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