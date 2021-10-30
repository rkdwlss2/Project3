//#include <stdio.h>
//#include <string.h>
//#include <memory.h>
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//#define MAX_LOGS 	20
//#define LOG_LENGTH 20
//using namespace std;
//
//string calls[2][21];
//vector<pair<int,pair<string,string>>> answer;
//int main()
//{
//	int n; //송수신 기록의 수 
//	cin >> n;
//	string logs[20]; //송수신 기록 
//	for (int i = 0; i < n; i++)
//	{
//		string tmp,tmp2;
//		cin >> tmp>>tmp2;
//		logs[i + 1] = tmp;
//		logs[i + 1] += ' ';
//		logs[i + 1] += tmp2;
//
//	}
//	string prevType = "";
//	string prevNum = "";
//
//	for (int i = 1; i <= n; i++) {
//		string now = logs[i];
//		if (logs[i][0] == 'S') {
//			prevType += logs[i][0];
//			prevType += logs[i][1];
//			prevType += logs[i][2];
//			for (int j = 0; j < 13; j++) {
//				prevNum += logs[i][4 + j];
//			}
//		}
//		else {
//			prevType += logs[i][0];
//			prevType += logs[i][1];
//			prevType += logs[i][2];
//			prevType += logs[i][3];
//			for (int j = 0; j < 13; j++) {
//				prevNum += logs[i][5 + j];
//			}
//		}
//		calls[0][i-1] = prevType;
//		calls[1][i-1] = prevNum;
//		prevType = "";
//		prevNum = "";
//	}
//	prevType = calls[0][0];
//	prevNum = calls[1][0];
//	int num = 1;
//	for (int i = 1; i < n; i++) {
//		string nowType = calls[0][i];
//		string nowNum = calls[1][i];
//		if (nowType == prevType&&nowNum==prevNum) {
//			num++;
//		}
//		else {
//			answer.push_back({ num,{ prevType,prevNum } });
//			num = 1;
//		}
//		prevType = nowType;
//		prevNum = nowNum;
//	}
//	answer.push_back({ num,{ prevType,prevNum } });
//	cout << answer.size() << '\n';
//	for (auto i : answer) {
//		int nowNum = i.first;
//		string nowType = i.second.first;
//		string nowTell = i.second.second;
//		cout << nowType << ' ' << nowTell;
//		if (nowNum != 1) {
//			cout << ' '<<'(' << nowNum << ')' ;
//		}
//		cout << '\n';
//	}
//	return 0;
//}