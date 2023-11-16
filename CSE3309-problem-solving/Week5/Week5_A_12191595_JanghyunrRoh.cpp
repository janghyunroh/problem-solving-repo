#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int T;

int solve(string s) {
	int n = s.length();
	int maxSize = 0;
	stack<int> st;

	st.push(-1);

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'C') st.push(i);
		else {
			st.pop();

			if (st.empty()) st.push(i);
			else {
				int curSize = i - st.top();
				maxSize = max(maxSize, curSize);
			}
		}
	}

	return maxSize;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> T;
	string s;
	while (T--) {
		cin >> s;
		cout << solve(s) << "\n";
	}

	return 0;
}