//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//int opNum=0;
//vector<int> v;
//vector<char> opChar = { '+','-','*' };
//vector<char> realOp;
//bool visited[4];
//
//string str;
//
//bool isNum(char Char) {
//    return Char >= '0' && Char <= '9';
//}
//bool isOp(char Char) {
//    for (int i = 0; i < 3; i++) {
//        if (Char == opChar[i])return true;
//    }
//    return false;
//}
//int findNum(int index, int mod) {
//    string tmp = "";
//    int tIndex = index;
//    while(true){
//        if (mod == 0)tIndex--;
//        if (mod == 1)tIndex++;
//        if (tIndex==str.size()||tIndex==-1|| isOp(str[tIndex])) {
//            if (tIndex!=-1&&str[tIndex] == '-' && (tIndex - 1 == -1 || isOp(str[tIndex - 1]))) {
//                tmp += str[tIndex];
//                continue;
//            }
//            string reverseStr = "";
//            if (mod == 0) for (int i = tmp.size() - 1; i >= 0; i--)reverseStr += tmp[i];
//            else if (mod == 1) reverseStr = tmp;
//            return atoi(reverseStr.c_str());
//        }
//        else if(isNum(str[tIndex])){
//            tmp += str[tIndex];
//        }
//    }
//}
//
//
//
//void cal(int opN) {
//    string tmpStr = "";
//    bool Ok = false;
//    for (int i = 0; i < str.size(); i++) {
//        if (realOp[opN] == str[i]) {
//            Ok = true;
//            int f = findNum(i, 0);
//            int s = findNum(i, 1);
//            if (opN==0) tmpStr += to_string(f + s);
//            else if (opN==1) tmpStr += to_string(f - s);
//            else if (opN == 2) tmpStr += to_string(f * s);
//        }
//        else if (isOp(str[i])){
//            int index = i;
//            string tmp = "";
//            char Op = str[i];
//            if (Ok) {
//                tmpStr += Op;
//                continue;
//            }
//            if (!Ok)tmp += str[i];
//            while (true) {
//                index--;
//                if (index==-1||isOp(str[index]))break;
//                tmp += str[index];
//            }
//            
//            Ok = false;
//            for (int i = tmp.size() - 1; i >= 0; i--) {
//                tmpStr += tmp[i];
//            }
//        }
//    }
//    int lastIndex = str.size()-1;
//    string tmp = "";
//    while (true) {
//        lastIndex--;
//        if (lastIndex == -1 || isOp(str[lastIndex])) {
//            if (lastIndex != -1 && realOp[opN] != str[lastIndex]) {
//                for (int i = tmp.size() - 1; i >= 0; i--) {
//                    tmpStr += tmp[i];
//                }
//            }
//            break;
//        }
//        tmp += str[lastIndex];
//
//    }
//    str = tmpStr;
//}
//
//
//void go(int index) {
//    if (index == opNum) {
//        string goTest = str;
//        for (auto i : v) {
//            cal(i);
//        }
//        
//        str = goTest;
//        return;
//    }
//    for (int i = 0; i < opNum; i++) {
//        if (visited[i])continue;
//        visited[i] = true;
//        v.push_back(i);
//        go(index + 1);
//        v.pop_back();
//        visited[i] = false;
//    }
//}
//
//void getOp() {
//    bool Op[3];
//    fill(Op, Op + 3, false);
//    for (int i = 0; i < str.size(); i++) {
//        for (int j = 0; j < 3; j++) {
//            if (opChar[j] == str[i]) {
//                Op[j] = true;
//            }
//        }
//    }
//    for (int i = 0; i < 3; i++) {
//        if (Op[i]) {
//            opNum++;
//            realOp.push_back(opChar[i]);
//        }
//    }
//}
//
//long long solution(string expression) {
//    long long answer = 0;
//    str = expression;
//    getOp();
//    go(0);
//    return answer;
//}
//
//
//
//int main() {
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    solution("100-200*300-500+20");
//}