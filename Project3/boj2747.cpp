#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<long long>> Matrix;

const int MOD = 1e9 + 7;
long long n;

Matrix init = { {1,1},{1,0} };

Matrix matrixMul(Matrix a, Matrix b) {
	Matrix ret(2);
	for (int i = 0; i < 2; i++) {
		ret[i].resize(2);
		for (int j = 0; j < 2; j++) {
			ret[i][j] = 0;
			for (int k = 0; k < 2; k++) {
				ret[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return ret;
}

Matrix func(long long n) {
	if (n == 1)return init;
	Matrix tmp;
	if (n % 2 == 1) {
		tmp = func(n - 1);
		return matrixMul(init, tmp);
	}
	else {
		tmp = func(n / 2);
		return matrixMul(tmp, tmp);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	Matrix ret = func(n);
	cout << ret[1][0];
}