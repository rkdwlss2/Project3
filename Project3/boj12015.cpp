
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
            //������ ���� ������ ������ ũ�ٸ�(�����ϴ� ����) push
            vt.push_back(num);
        }
        else {
            //num�̻��� ���� ó������ ��Ÿ���� ��ġ�� num�� �ִ´�.
            int index = lower_bound(vt.begin(), vt.end(), num) - vt.begin();
            vt[index] = num;
        }
    }



    //ó���� �־���� 0�� ������ ������ ����� ���� ���� ������ ����
    cout << vt.size() - 1 << '\n';

    return 0;
}
