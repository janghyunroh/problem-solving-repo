// //W2_A - dictionary
// //num으로 string O(1) 탐색 -> 배열
// //string으로 num O(1) 탐색 -> unordered_map
// //map 사용시 string to num 탐색이 O(log N)
// #include <iostream>
// #include <unordered_map>
// #include <string>

// using namespace std;

// int T, N, C;

// int main() {
// 	cin >> T;

// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	while (T--) {
// 		cin >> N;
// 		unordered_map<string, int> m;
// 		string* arr = new string[N + 1];

// 		string s;
// 		for (int i = 1; i <= N; i++) {
// 			cin >> s;
// 			arr[i] = s;
// 			m.insert({ s, i });
// 		}

// 		cin >> C;
// 		for (int i = 0; i < C; i++) {
// 			cin >> s;
// 			if (s[0] >= '0' && s[0] <= '9') {   //if input is number
// 				cout << arr[stoi(s)] << "\n";
// 			}
// 			else    //if input is title
// 				cout << m.at(s) << "\n";
// 		}
// 	}


// 	return 0;
// }