#include <iostream>
#include <vector>
using namespace std;
int main() {
    int m = 100;
    vector<long long> d(m + 1);
    d[1] = 1;
    for (int i = 2; i <= m; i++) {
        d[i] = d[i - 1] + d[i - 2];
    }
    vector<long long> s(m + 1);
    for (int i = 1; i <= m; i++) {
        s[i] = s[i - 1] + d[i];
    }
    long long k;
    cin >> k;
    if (k == 1) {
        cout << "1" << '\n';
    }
    else {
        cout << "10";
        int n = 0;
        for (int i = 2; i <= m; i++) {
            if (k <= s[i]) {
                n = i;
                break;
            }
        }
        k = k - s[n - 1] - 1;
        n = n - 2;
        while (n > 0) {
            if (k > s[n - 1]) {
                if (n >= 2) {
                    cout << "10";
                }
                else {
                    cout << "1";
                }
                k = k - s[n - 1] - 1;
                n = n - 2;
            }
            else {
                cout << "0";
                n -= 1;
            }
        }
        cout << '\n';
    }
    return 0;
}