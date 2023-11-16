//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//bool comp(string a, string b) {
//	return a.length() == b.length() ? a < b : a.length() < b.length();
//}
//
//int main() {
//	int N;
//	cin >> N;
//	vector<string> words;
//	for (int i = 0; i < N; i++) {
//		string word;
//		cin >> word;
//		if(find(words.begin(), words.end(), word) == words.end())
//			words.push_back(word);
//	}
//
//	sort(words.begin(), words.end(), comp);
//
//	for (int i = 0; i < words.size(); i++)
//		cout << words[i] << "\n";
//}