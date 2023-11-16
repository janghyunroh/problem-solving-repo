// //W6_A - 간단한 카드게임 (deque & bool 배열)
// #include <iostream>
// #include <deque>
// using namespace std;

// int T, N, M;


// int main() {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(0);
// 	cout.tie(0);

// 	cin >> T;
// 	while (T--) {
// 		cin >> N >> M;
// 		bool* a_used = new bool[N + 1] {false, };
// 		bool* b_used = new bool[N + 1] {false, };
// 		deque<int> a_cards;
// 		deque<int> b_cards;

// 		int a_score = 0, b_score = 0;

// 		int a, b;
// 		for (int i = 0; i < M; i++) {
// 			cin >> a >> b;
// 			a_used[a] = true;
// 			b_used[b] = true;
// 			if (a >= b) a_score++;
// 			else b_score++;
// 		}

// 		for (int i = 1; i <= N; i++) {
// 			if (!a_used[i]) a_cards.push_back(i);
// 			if (!b_used[i]) b_cards.push_back(i);
// 		}

// 		while (!a_cards.empty()) {
// 			if (a_cards.front() >= b_cards.front()) {
// 				a_score++;
// 				a_cards.pop_front();
// 				b_cards.pop_front();
// 			}
// 			else {
// 				b_score++;
// 				a_cards.pop_front();
// 				b_cards.pop_back();
// 			}
// 		}

// 		cout << ((a_score > b_score) ? 1 : 0) << "\n";
// 	}
// 	return 0;
// }