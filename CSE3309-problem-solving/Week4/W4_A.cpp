// //W4_A - 고양이 문제 (투 포인터)
// #include <iostream>
// #include <string>

// using namespace std;
// using ll = long long;

// int T, N;

// ll solve(string s) {
// 	ll ret1 = 0, ret2 = 0;;
// 	int curIdx = 0;
    
//     //curIdx = 현재 C/D를 보내야 하는 인덱스

//     //1. C를 모두 왼쪽으로 보내는 경우
// 	for (int i = 0; i < s.length(); i++) {
// 		if (s[i] == 'C') {
// 			ret1 += (i - curIdx);
// 			curIdx++;
// 		}
// 	}

//     //2. D를 모두 왼쪽으로 보내는 경우
// 	curIdx = 0;
// 	for (int i = 0; i < s.length(); i++) {
// 		if (s[i] == 'D') {
// 			ret2 += (i - curIdx);
// 			curIdx++;
// 		}
// 	}

// 	return ret1 > ret2 ? ret2 : ret1;
// }

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	cin >> T;
// 	while (T--) {
// 		cin >> N;
// 		string s;
// 		cin >> s;
// 		cout << solve(s) << "\n";
// 	}
// 	return 0;
// }