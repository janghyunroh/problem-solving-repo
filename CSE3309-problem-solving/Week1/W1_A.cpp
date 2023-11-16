// //W1_A - anagram
// //애너그램은 문자의 순서 상관 없이 두 문자열의 각 알파벳의 개수가 똑같으면 됨! -> 26짜리 알파벳 배열 2개로 카운팅!
// #include <iostream>

// using namespace std;

// int T;

// char check(string pro, string set) {    //check if pro is anagram of set
// 	int pro_alph[26] = { 0, };
// 	int set_alph[26] = { 0, };
// 	for (char c : pro) {    //counting - O(N)
// 		pro_alph[(int)c - 97]++;
// 	}
// 	for (char c : set) {    //counting - O(N)
// 		set_alph[(int)c - 97]++;
// 	}
// 	for (int i = 0; i < 26; i++)    //compare - O(1)
// 		if (pro_alph[i] != set_alph[i]) return 'F';

// 	return 'T';

// }

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	cin >> T;
// 	string pro, set;
// 	while (T--) {
// 		cin >> pro;
// 		cin >> set;
// 		cout << check(pro, set) << "\n";
// 	}

// 	return 0;
// }