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
//// 비트마스크를 사용하는 에라토스테네스의 체의 구현
//// 이 함수를 수행하고 난 뒤, isPrime() 을 이용해 각 수가 소수인지 알 수 있다.
//void eratosthenes() {
//	memset(sieve, 255, sizeof(sieve));
//
//	setComposite(0);
//	setComposite(1);
//
//	lli sqrtn = lli(sqrt(n));
//	for (lli i = 2; i <= sqrtn; ++i)
//		// 이 수가 아직 지워지지 않았다면
//		if (isPrime(i))
//			// i 의 배수 j 들에 대해 isPrime[j] = false 로 둔다.
//			// i*i 미만의 배수는 이미 지워졌으므로 신경쓰지 않는다.
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
