//#include <string>
//#include <vector>
//#include <iostream>
//#include <sstream>
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//int fTime, firstFee, unitTime, unitFee;
//
//unordered_map<string, pair<bool,int>> um;
//unordered_map<string, int> um2;
//unordered_map<int, string> um3;
//int getMin(string str) {
//    int Hour = (str[0] - '0') * 10 + (str[1] - '0');
//    int Min = (str[3] - '0') * 10 + (str[4] - '0');
//    return Hour * 60 + Min;
//}
//
//
//vector<int> solution(vector<int> fees, vector<string> records) {
//    vector<int> answer;
//    fTime = fees[0];
//    firstFee = fees[1];
//    unitTime = fees[2];
//    unitFee = fees[3];
//    int index = 0;
//    for (int i = 0; i < records.size(); i++) {
//        string str = records[i],Time,carNum,inOut;
//        stringstream ss(str);
//        ss >> Time >> carNum >> inOut;
//        cout << Time << ' ' << carNum << ' ' << inOut << '\n';
//
//        if (inOut == "IN") {
//            if (um.count(carNum) > 0) {
//                bool Ok = um[carNum].first;
//                if (!Ok) {
//                    Ok = true;
//                    um[carNum].first = true;
//                    um[carNum].second = getMin(Time);
//                }
//            }
//            else {
//                um.insert({carNum, { true, getMin(Time) } });
//            }
//        }
//        else {
//            int nowTime = getMin(Time);
//            int prevTime = um[carNum].second;
//            um[carNum].first = false;
//            if (um2.count(carNum) > 0) {
//                um2[carNum] +=(nowTime-prevTime );
//            }
//            else {
//                um2.insert({ carNum,nowTime - prevTime });
//            }
//        }
//    }
//    for (auto i : um) {
//        if (i.second.first == true) {
//            string carNum = i.first;
//            int nowTime = getMin("23:59");
//            int prevTime = i.second.second;
//            if (um2.count(carNum) > 0) {
//                um2[carNum] += (nowTime - prevTime);
//            }
//            else {
//                um2.insert({ carNum,nowTime - prevTime });
//            }
//
//        }
//    }
//    vector<pair<string, int>> a;
//    for (auto i : um) {
//        a.push_back({ i.first,um2[i.first]});
//    }
//    sort(a.begin(), a.end());
//    for (auto i : a) {
//        int totalTime = i.second;
//        int ans = 0;
//        if (totalTime <= fTime) {
//            ans = firstFee;
//        }
//        else {
//            int tmpTime = totalTime - fTime;
//            int cnt = 0;
//            if ((tmpTime%unitTime)>0){
//                cnt = 1;
//            }
//            cnt += (tmpTime / unitTime);
//            ans = firstFee + cnt * unitFee;
//        }
//
//        answer.push_back(ans);
//    }
//    return answer;
//}
//
//int main() {
//    vector<int> a = {180, 5000, 10, 600};
//    vector<string> b = { "05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT", "07:59 5961 OUT", "07:59 0148 IN", "18:59 0000 IN", "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT" };
//    vector<int> c = solution(a, b);
//    for (auto i : c) {
//        cout << i << ' ';
//    }
//
//}