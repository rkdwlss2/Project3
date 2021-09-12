//#include <string>
//#include <vector>
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int Len,issue;
//int arr[27][31];
//int Cnt[27];
//priority_queue<pair<int, int>> pq;
//
//string solution(vector<string> research, int n, int k) {
//    string answer = "";
//    issue = 2 * n * k;
//    Len = research.size();
//    for (int i = 0; i < Len; i++) {
//        for (int j = 0; j < research[i].size(); j++) {
//            char now = research[i][j];
//            int intNow = now - 'a';
//            arr[intNow][i]++;
//        }
//    }
//    for (int i = 0; i < 26; i++) {
//        for (int j = 0; j <= Len-n; j++) {
//            int Sum = 0;
//            for (int l = 0; l < n; l++) {
//                if (arr[i][j + l] >= k) {
//                    Sum += arr[i][j + l];
//                }  
//            }
//            if (Sum >= issue)Cnt[i]++;
//        }
//    }
//    for (int i = 0; i < 26; i++) {
//        if (Cnt[i] > 0)pq.push({ Cnt[i],-i });
//    }
//    if (!pq.empty()) {
//        answer += (-pq.top().second + 'a');
//    }
//    else {
//        answer += "None";
//    }
//    
//    return answer;
//}
//
//int main() {
//    vector<string> r = { "xy","xy" };
//    int a = 1;
//    int k = 1;
//    cout << solution(r, a, k) << '\n';
//}