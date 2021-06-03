//#include<cstdio>
//#include<cstring>
//#include<cmath>
//#include<iostream>
//#include<string>
//#include<vector>
//#define lli long long int
//using namespace std;
//
//const lli MAX_N = 1024 * 1024;
//lli n;
//unsigned char sieve[(MAX_N + 7) / 8];
//
//inline bool isPrime(lli k) {
//	return sieve[k >> 3] & (1 << (k & 7));
//}
//
//inline void setComposite(lli k) {
//	sieve[k >> 3] &= ~(1 << (k & 7));
//}
//
//// ��Ʈ����ũ�� ����ϴ� �����佺�׳׽��� ü�� ����
//// �� �Լ��� �����ϰ� �� ��, isPrime() �� �̿��� �� ���� �Ҽ����� �� �� �ִ�.
//void eratosthenes() {
//	memset(sieve, 255, sizeof(sieve));
//
//	setComposite(0);
//	setComposite(1);
//
//	lli sqrtn = lli(sqrt(n));
//	for (lli i = 2; i <= sqrtn; ++i)
//		// �� ���� ���� �������� �ʾҴٸ�
//		if (isPrime(i))
//			// i �� ��� j �鿡 ���� isPrime[j] = false �� �д�.
//			// i*i �̸��� ����� �̹� ���������Ƿ� �Ű澲�� �ʴ´�.
//			for (lli j = i * i; j <= n; j += i)
//				setComposite(j);
//}
//
//int main() {
//	n = MAX_N;
//	eratosthenes();
//	lli a, b;
//	cin >> a >> b;
//	lli answer = 0;
//	for (lli i = a; i <= b; i++)
//		if (isPrime(i)) {
//			answer++;
//			cout << i << '\n';
//		}
//	cout << answer << '\n';
//}
//
