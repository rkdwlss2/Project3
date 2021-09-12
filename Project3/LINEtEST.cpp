//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//int arr[6051];
//int n;
//int solution(vector<int> student, int k) {
//    int answer = 0;
//    n = student.size();
//    for (int i = 0; i < n; i++) {
//        for (int j = i; j < n; j++) {
//            int num = 0;
//            for (int l = i; l <= j; l++) {
//                if (student[l] == 1)num++;
//            }
//            if (num == k)answer++;
//        }
//    }
//    return answer;
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//    vector<int> s = { 0,1,0,0 };
//    int k = 1;
//    cout << solution(s, k) << '\n';
//}