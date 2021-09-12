//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//int N;
//vector<int> res;
//int result[11];
//int ansResult[11];
//int Big = -1;
//
//bool getScore() {
//    for (int i = 10; i >= 0; i--) {
//        if (res[i] > ansResult[i])return true;
//        else if (res[i] == ansResult[i])continue;
//        else return false;
//    }
//    return true;
//}
//void go(int index, int num) {
//
//    if (num == 0) {
//        for (auto i : res) {
//            cout << i << ' ';
//        }cout << '\n';
//
//        int aSum = 0;
//        int bSum = 0;
//        int popNum = 11 - res.size();
//        if (res.size() < 11) {
//            for (int i = 0; i < popNum; i++) {
//                res.push_back(0);
//            }
//        }
//        for (int i = 0; i < 11; i++) {
//            if (result[i] == 0 && res[i] == 0)continue;
//            if (result[i] >= res[i])aSum += (10-i);
//            else bSum += (10-i);
//        }
//        int tmpSum = bSum - aSum;
//        cout <<"this is bSum and aSum "<< bSum << ' ' << aSum << '\n';
//        if (Big < tmpSum) {
//            Big = tmpSum;
//            for (int i = 0; i < 11; i++) {
//                ansResult[i] = res[i];
//            }
//        }
//        else if (Big==tmpSum){
//            if (getScore()) {
//                for (int i = 0; i < 11; i++) {
//                    ansResult[i] = res[i];
//                }
//            }
//        }
//        for (int i = 0; i < popNum; i++) {
//            res.pop_back();
//        }
//        return;
//    }
//    if (index == 11) {
//        return;
//    }
//
//    int nowA = result[index];
//    if (num > nowA) {
//        
//        res.push_back(nowA + 1);
//        go(index + 1, num - nowA-1);
//        res.pop_back();
//    }
//    res.push_back(0);
//    go(index + 1, num);
//    res.pop_back();
//    if (index == 10 ) {
//        nowA = num - 1;
//        res.push_back(nowA + 1);
//        go(index + 1, num - nowA - 1);
//        res.pop_back();
//    }
//   
//}
//
//vector<int> solution(int n, vector<int> info) {
//    vector<int> answer;
//    for (int i = 0; i < 11; i++) {
//        result[i] = info[i];
//    }
//
//    N = n;
//    go(0, n);
//    if (Big == 0) {
//        answer.push_back(-1);
//        return answer;
//    }
//    if (Big == -1) {
//        answer.push_back(-1);
//        return answer;
//    }
//    for (int i = 0; i < 11; i++) {
//        answer.push_back(ansResult[i]);
//    }
//    return answer;
//}
//
//int main() {
//    int a = 10;
//    vector<int> inFo = { 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 3 };
//    vector<int> ab = solution(a, inFo);
//    for (auto i : ab) {
//        cout << i << ' ';
//    }
//
//}