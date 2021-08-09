//#include <iostream>
//#include <algorithm>
//#define P 1000000007LL
//using namespace std;
//
//long long fac[4000001], n, k, inv[4000001];
//
//long long power(long long x, long long y) {
//    long long ret = 1;
//    while (y > 0) {
//        if (y % 2) {
//            ret *= x;
//            ret %= P;
//        }
//        x *= x;
//        x%= P;
//        y /= 2;
//    }
//    return ret;
//}
///*
// 3c2=2c2+2c1;
// 2c2=1c2+1c1;
// 2c1=1c1+1c0;
//*/
//
//
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//    fac[1] = 1;
//    for (int i = 2; i <= 4000000; i++) {
//        fac[i] = (fac[i - 1] * i) % P;
//    }
//    inv[4000000] = power(fac[4000000], P - 2);
//    for (int i = 4000000 - 1; i > 0; i--) {
//        inv[i] = (inv[i + 1] * (i + 1)) % P;
//    }
//    cin >> n >> k;
//    if (n == k || k == 0) {
//        cout << 1 << '\n';
//        return 0;
//    }
//    long long r = (fac[n] * inv[n - k]) % P;
//    r = (r * inv[k]) % P;
//    cout << r << '\n';
//}