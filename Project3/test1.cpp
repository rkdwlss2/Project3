//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//string arr[10] = { "ze","on","tw","th","fo","fi","si","ei","ni" };
//int solution(string s) {
//    int answer = 0;
//    for (int i = 0; i < s.size(); i++) {
//        char now = s[i];
//        if (now >= '0' && now <= '9') {
//            answer = answer * 10 + now - '0';
//        }
//        else {
//            string ns = "";
//            ns += s[i];
//            ns += s[i + 1];
//            cout << ns << '\n';
//            for (int j = 0; j < 10; j++) {
//                if (ns == arr[j]) {
//                    answer = answer * 10 + j;
//                }
//            }
//
//        }
//    }
//    return answer;
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//    string a = "one4seveneight";
//    solution(a);
//}