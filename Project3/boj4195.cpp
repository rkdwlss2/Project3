//#include <iostream>
//#include <string>
//#include <unordered_map>
//#include <algorithm>
//using namespace std;
//
//int parent[200001];
//int cnt[200001];
//int Find(int x) {
//	if (x == parent[x])return x;
//	return parent[x] = Find(parent[x]);
//}
//
//void Union(int a, int b) {
//	a = Find(a);
//	b = Find(b);
//	if (b > a) {
//		parent[b] = a;
//		cnt[a] += cnt[b];
//	}
//	else if (b<a){
//		parent[a] = b;
//		cnt[b] += cnt[a];
//	}
//}
//
//int main() {
//
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	int tc;
//	cin >> tc;
//	while (tc--) {
//		int num,m,index=0;
//		cin >> num;
//		m = num;
//		for (int i = 1; i <= 200001; i++) {
//			parent[i] = i;
//			cnt[i] = 1;
//		}
//		unordered_map<string, int> um;
//		while (m--) {
//			string a, b;
//			int A, B;
//			cin >> a >> b;
//			if (um.count(a)== 0) {
//				um.insert({ a,++index });
//				A = index;
//			}
//			else {
//				A = um[a];
//			}
//			if (um.count(b)==0) {
//				um.insert({ b,++index });
//				B = index;
//			}
//			else {
//				B = um[b];
//			}
//			Union(A, B);
//			cout << max(cnt[parent[A]],cnt[parent[B]]) << '\n';
//		}
//		
//
//	}
//}