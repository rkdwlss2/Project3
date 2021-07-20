////
////  boj1159.cpp
////  boj1926bfs
////
////  Created by °­¸íÁø on 2021/07/19.
////
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//int alpha[26];
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    while (n--) {
//        string tmp;
//        cin >> tmp;
//        int now = tmp[0] - 'a';
//        alpha[now]++;
//    }
//    bool ok = false;
//    for (int i = 0; i < 26; i++) {
//        if (alpha[i] >= 5) {
//            ok = true;
//            char tmp = i+ 'a';
//            cout << tmp;
//        }
//    }
//    if (ok == false) {
//        cout << "PREDAJA" << '\n';
//    }
//}
