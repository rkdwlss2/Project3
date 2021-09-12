//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//int imp[101];
//int Time[101];
//
//int findBig() {
//    int Big = -1;
//    int index = -1;
//    for (int i =100; i >=0; i--) {
//        if (Big <= imp[i]) {
//            Big = imp[i];
//            index = i;
//        }
//    }
//    return index;
//}
//bool findZero() {
//    bool Ok = false;
//    for (int i = 0; i < 101; i++) {
//        if (imp[i] > 0)return true;
//    }
//    return false;
//}
//
//vector<int> solution(vector<vector<int>> jobs) {
//    vector<int> answer;
//    int nowTime = 1;
//    int nowClass = jobs[0][2];
//    for (int i = 0; i < jobs.size(); i++) {
//        int inputTime = jobs[i][0];
//        int duringTime = jobs[i][1];
//        int classNum = jobs[i][2];
//        int important = jobs[i][3];
//        if (nowTime <= inputTime) {
//            if (nowTime == inputTime && nowClass == classNum) {
//                nowTime += duringTime;
//                if (answer.size() > 0 && answer[answer.size() - 1] != classNum) {
//                    answer.push_back(classNum);
//                }
//                else if (answer.size() == 0) {
//                    answer.push_back(classNum);
//                }
//                continue;
//            }
//            if (i == 0) {
//                nowTime = nowTime + duringTime;
//                if (answer.size() > 0 && answer[answer.size() - 1] != classNum) {
//                    answer.push_back(classNum);
//                }
//                else if(answer.size()==0) {
//                    answer.push_back(classNum);
//                }
//                continue;
//            }
//            imp[classNum] += important;
//            Time[classNum] += duringTime;
//            int nowGo = findBig();
//            nowTime += Time[nowGo];
//            nowClass = nowGo;
//            if (answer.size() > 0 && answer[answer.size() - 1] != classNum) {
//                answer.push_back(classNum);
//            }
//            else if (answer.size() == 0) {
//                answer.push_back(classNum);
//            }
//            Time[nowGo] = 0;
//            imp[nowGo] = 0;
//        }
//        else {
//            if (nowClass == classNum) {
//                nowTime += duringTime;
//                if (answer.size() > 0 && answer[answer.size() - 1] != classNum) {
//                    answer.push_back(classNum);
//                }
//                else if (answer.size() == 0) {
//                    answer.push_back(classNum);
//                }
//                continue;
//            }
//            else {
//                imp[classNum] += important;
//                Time[classNum] += duringTime;
//            }
//        }
//    }
//    while (findZero()) {
//        int nowGo = findBig();
//        nowTime += Time[nowGo];
//        if (answer.size() > 0 && answer[answer.size() - 1] != nowGo) {
//            answer.push_back(nowGo);
//        }
//        Time[nowGo] = 0;
//        imp[nowGo] = 0;
//    }
//
//    return answer;
//}
//
//int main() {
//    vector<vector<int>> v = { {1, 5, 2, 3},{2, 2, 3, 2},{3, 1, 3, 3},{5, 2, 1, 5},{7, 1, 1, 1},{9, 1, 1, 1},{10, 2, 2, 9} };
//    vector<int> a =solution(v);
//    for (auto i : a) {
//        cout << i << ' ';
//    }
//}