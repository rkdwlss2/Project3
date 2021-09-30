#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int n;

struct TrieNode {
	string strData;
	map<string, TrieNode*> mp;
	TrieNode() {
		strData = "", mp.clear();
	}
};

class Trie {
public:
	TrieNode* root;
	Trie() { root = new TrieNode(); }
	void insert(TrieNode* current, string data) {
		TrieNode* keyNode = current->mp[data];
		if (keyNode == nullptr) {
			keyNode = new TrieNode();
			current->mp[data] = keyNode;
		}
		keyNode->strData = data;
	}
	void prtAllNode(TrieNode* current, int depth) {
		if (current == nullptr)
			return;
		for (int i = 1; i < depth; i++)
			cout << "--";
		if (current != root)
			cout << current->strData << '\n';
		for (auto item : current->mp) {
			prtAllNode(item.second, depth + 1);
		}
	}
};
int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	Trie trie;
	int n; cin >> n;
	while (n--) {
		int t; cin >> t;
		
		TrieNode* current = trie.root;
		for (int j = 0; j < t; j++) {
			string in;
			cin >> in;
			trie.insert(current, in);
			current = current->mp[in];
		}
	}
	trie.prtAllNode(trie.root, 0);
}

