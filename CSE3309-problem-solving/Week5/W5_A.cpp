// //W5_A - 토끼게임
// /**
//  * 부분 문자열(괄호 매칭과 유사) -> 스택 사용
//  * -1을 push하는 것이 포인트!
// */
// #include <iostream>
// #include <stack>

// using namespace std;

// int T;
// string s;

// int solve(string s) {
// 	int maxSize = 0;
// 	stack<int> st;
// 	st.push(-1);

// 	for (int i = 0; i < s.length(); i++) {
// 		if (s[i] == 'C') {
// 			st.push(i);
// 		}
// 		else {
// 			st.pop();
// 			if (st.empty()) st.push(i);

// 			else {
// 				int id = st.top();
// 				maxSize = max(maxSize, i - id);
// 			}
// 		}
// 	}

// 	return maxSize;
// }

// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	cin >> T;
// 	while (T--) {
// 		cin >> s;
// 		cout << solve(s) << "\n";
// 	}
// 	return 0;
// }