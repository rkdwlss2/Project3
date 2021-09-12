//
//#include <string>
//#include <cmath>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//vector<string> Nums;
//bool isPrime(int n) {
//    if (n <= 1)return false;
//    if (n == 2)return true;
//    if (n % 2 == 0)return false;
//    int sqrtn = int(sqrt(n));
//    for (int div = 3; div <= sqrtn; div += 2) {
//        if (n % div == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//string makeNum(int n, int k) {
//    string answer = "";
//    string ret = "";
//    while (n > 0) {
//        int now = n % k;
//        char tmp = now + '0';
//        n /= k;
//        answer += tmp;
//    }
//    for (int i = answer.size() - 1; i >= 0; i--) {
//        ret += answer[i];
//    }
//    return ret;
//}
//
//bool findZero(string num) {
//    bool ok = false;
//    for (int i = 0; i < num.size(); i++) {
//        if (num[i] == '0')return true;
//    }
//    return false;
//}
//
//void getSplit(string str) {
//    string tmp = "";
//    for (int i = 0; i < str.size(); i++) {
//        if (str[i] == '0') {
//            Nums.push_back(tmp);
//            tmp = "";
//        }
//        else {
//            tmp += str[i];
//        }
//
//    }
//    if (tmp != "")Nums.push_back(tmp);
//}
//
//int solution(int n, int k) {
//    int answer =0;
//    string trans = makeNum(n,k);
//    if (!findZero(trans)) {
//        if (isPrime(atoi(trans.c_str())))return 1;
//        return 0;
//    }
//    getSplit(trans);
//    for (auto i : Nums) {
//        if (isPrime(atoi(i.c_str())))answer++;
//    }
//    return answer;
//}
//
//int main() {
//    int a = 11;
//    int k = 10;
//    cout<<solution(a,k);
//}