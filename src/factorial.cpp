#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool IsPalindrom(const string& st) {
	vector<char> word1;
	vector<char> word2;

	for (size_t i = 0; i < st.size(); ++i) {
		word1.push_back(st[i]);
	}
	for (int i = st.size() - 1; i >= 0; --i) {
		word2.push_back(st[i]);
	}
	if (word1 == word2) {
		return true;
	}
	return false;
}

vector<string> PalindromFilter(vector<string> words, size_t minLength) {
	vector<string> fin {};

	for (auto s : words) {
		if (s.size() >= minLength && IsPalindrom(s) == true) {
			fin.push_back(s);
		}
	}
	return fin;
}

int main() {
	vector<string> aaa;
	aaa = PalindromFilter({"abacaba", "bro", "code", "aba", "weew"}, 4);
	for (auto s : aaa) {
		cout << s << " ";
	}
	return 0;
}
