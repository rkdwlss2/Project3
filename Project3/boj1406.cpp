/*#include <iostream>
#include <stack>
#include <string>
#include <queue>
using namespace std;

char command[4] = { 'L','D','B','P' };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack<char> left;
	stack<char> right;
	string st;
	cin >> st;
	for (int i = 0; i < st.size(); i++) {
		left.push(st[i]);
	}
	int tc;
	cin >> tc;
	while (tc--) {
		char tmp;
		cin >> tmp;
		if (tmp == command[0]) {
			if (left.empty()) {
				continue;
			}
			char p = left.top();
			left.pop();
			right.push(p);
		}
		else if (tmp == command[1]) {
			if (right.empty()) {
				continue;
			}
			char p = right.top();
			right.pop();
			left.push(p);
		}
		else if (tmp == command[2]) {
			if (left.empty()) {
				continue;
			}
			left.pop();
		}
		else {
			char argue;
			cin >> argue;
			left.push(argue);
		}
	}
	stack<char> answer;
	while (!left.empty()) {
		answer.push(left.top());
		left.pop();
	}
	while (!answer.empty()) {
		cout << answer.top();
		answer.pop();
	}
	while (!right.empty()) {
		cout<<right.top();
		right.pop();
	}
}*/