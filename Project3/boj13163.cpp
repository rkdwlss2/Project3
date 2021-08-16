////
////  boj13163.cpp
////  boj1926bfs
////
////  Created by °­¸íÁø on 2021/08/15.
////
//
//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    int n;
//    cin >> n;
//    for (int index = 0; index < n + 1; index++) {
//        string str;
//        getline(cin, str);
//        if (index == 0)continue;
//        stringstream s(str);
//        string first;
//        s >> first;
//        string tmp = "";
//        for (int i = (int)first.size(); i < str.size(); i++) {
//            if (str[i] == ' ')continue;
//            tmp += str[i];
//        }
//        cout << "god" << tmp << '\n';
//    }
//}