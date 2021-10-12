#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		for (int j = 0; j < tmp; j++) {
			cout << "=";
		}
		cout << '\n';
	}
}