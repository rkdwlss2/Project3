//#include <iostream>
//#include <list>
//#include <vector>
//#include <string>
//#include <stack>
//using namespace std;
//int arr[1000001];
//list<int> li;
//list<int>::iterator iter;
//list<int>::iterator its[1000001];
//stack<pair<int, int>> st;
//int stringToNum(string str) {
//	string tmp = "";
//	for (int i = 2; i < str.size(); i++) {
//		tmp += str[i];
//	}
//	return atoi(tmp.c_str());
//}
//
//string solution(int n, int k, vector<string> cmd) {
//	string answer = "";
//
//	for (int i = 0; i < n; i++) {
//		li.push_back(i);
//	}
//	li.push_back(n);
//	iter = li.begin();
//	int tmp = k;
//	for (int i = 0 ; i <n+1;i++){
//		its[i] = iter;
//		iter++;
//	}
//	iter = its[k];
//	for (int i = 0; i < (int)cmd.size(); i++) {
//		if (cmd[i][0] == 'D') {
//			int num = stringToNum(cmd[i]);
//			while (num--) {
//				iter++;
//			}
//			
//		}else if (cmd[i][0] == 'U') {
//			int num = stringToNum(cmd[i]);
//			while (num--) {
//				iter--;
//			}
//		}
//		else if (cmd[i][0] == 'C') {
//			//
//			//if (++iter == li.end()) {
//			//	st.push({ iter,*tmpiter });
//			//	iter--;
//			//	iter--;
//			//}
//			//else {
//			//	st.push({ iter,*tmpiter });
//			//}
//			//li.erase(tmpiter);
//			st.push({ *iter,*(next(iter)) });
//			iter = li.erase(iter);
//			if (*iter ==n) {
//				iter--;
//			}
//		}
//		else if(cmd[i][0]=='Z') {
//			int last = st.top().first;
//			int index = st.top().second;
//			st.pop();
//			its[last]=li.insert(its[index], last);
//		}
//
//	}
//	string status(n, 'X');
//	for (auto i : li) {
//		if(i!=n)status[i] = 'O';
//	}
//
//	return status;
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int a=8, b=7;
//	vector<string> cmd = { "C","C","C","Z","Z" };
//	cout<<solution(a,b,cmd)<<'\n';
//
//}