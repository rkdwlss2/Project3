
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
vector<int> vt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    vt.push_back(0);



    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > vt.back()) {
            //벡터의 가장 마지막 값보다 크다면(증가하는 순서) push
            vt.push_back(num);
        }
        else {
            //num이상의 값이 처음으로 나타나는 위치에 num을 넣는다.
            int index = lower_bound(vt.begin(), vt.end(), num) - vt.begin();
            vt[index] = num;
        }
    }



    //처음에 넣어놓은 0을 제외한 벡터의 사이즈가 최장 증가 수열의 길이
    cout << vt.size() - 1 << '\n';

    return 0;
}
