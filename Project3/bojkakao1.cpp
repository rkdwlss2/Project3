//#include <string>
//#include <vector>
//#include <iostream>
//#include <set>
//#include <unordered_map>
//#include <sstream>
//using namespace std;
//int idSize;
//unordered_map<string,int> um;
//vector<set<int>> vs;
//int ans[1001];
//bool banned[1001];
//int ansReal[1001];
//vector<int> solution(vector<string> id_list, vector<string> report, int k) {
//    vector<int> answer;
//    idSize = id_list.size();
//    for (int i = 0; i < idSize;i++) {
//        um.insert({ id_list[i],i });
//        set<int> tmp = {};
//        vs.push_back(tmp);
//    }
//    for (int i = 0; i < report.size(); i++) {
//        stringstream ss(report[i]);
//        string a, b;
//        ss >> a >> b;
//        int num1, num2;
//        num1 = um[a];
//        num2 = um[b];
//        vs[num1].insert(num2);
//    }
//    for (int i = 0; i < idSize; i++) {
//        for (auto j : vs[i]) {
//            ans[j]++;
//        }
//    }
//
//    for (int i = 0; i < idSize; i++) {
//        if (ans[i] >= k)banned[i] = true;
//    }
//    for (int i = 0; i < report.size(); i++) {
//        stringstream ss(report[i]);
//        string a, b;
//        ss >> a >> b;
//        int num1, num2;
//        num1 = um[a];
//        num2 = um[b];
//        if (banned[num2] == true) {
//            ansReal[num1]++;
//        }
//    }
//    for (int i = 0; i < idSize; i++) {
//        string now = id_list[i];
//        int nowInt = um[now];
//        answer.push_back(ansReal[nowInt]);
//    }
//    return answer;
//}
//
//int main() {
//    vector<string> a = { "muzi", "frodo", "apeach", "neo" };
//    vector<string> b = { "muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi" };
//
//    vector<int> answer = solution(a, b,2);
//    for (auto i : answer) {
//        cout << i << ' ';
//    }
//}