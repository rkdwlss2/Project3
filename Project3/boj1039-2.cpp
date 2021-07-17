//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <cstring>
//using namespace std;
//int m, k;
//string n;
//int ck[1000001];
//int cnt = 0;
//int d[1000001][11];
//
//int dfs(string a, int depth)
//{
//    if (depth == k) {
//        return stoi(a);
//    }
//
//    int& ret = d[stoi(a)][depth];
//    if (ret != -1)return ret;
//
//    for (int i = 0; i < a.size() - 1; i++)
//    {
//        for (int j = i + 1; j < a.size(); j++)
//        {
//
//            swap(a[i], a[j]);
//            if (a[0] == '0') {
//                swap(a[i], a[j]);
//                continue;
//            }
//            ret = max(ret, dfs(a, depth + 1));
//            swap(a[i], a[j]);
//        }
//    }
//    return ret;
//}
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    cin >> n >> k;
//    memset(d, -1, sizeof(d));
//    cout << dfs(n, 0) << '\n';
//}