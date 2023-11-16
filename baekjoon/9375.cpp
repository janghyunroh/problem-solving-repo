//#include <iostream>
//#include <map>
//#include <vector>
//
//using namespace std;
//
//int T, N;
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	cin >> T;
//	while (T--) {
//		multimap<string, string> mm;
//		cin >> N;
//		string clothes, type;
//		for (int i = 0; i < N; i++) {
//			cin >> clothes >> type;
//			mm.insert({ type, clothes });
//		}
//
//		if (N == 0) {
//			cout << 0 << "\n";
//		}
//		else {
//			//calculating
//			vector<int> v;
//
//			auto it = mm.begin();
//			string k = it->first;
//			while (it != mm.end()) {
//
//				int cnt = 0;
//				while (it != mm.upper_bound(k)) {
//					cnt++;
//					it++;
//				}
//				v.push_back(cnt);
//				if (it != mm.end())
//					k = it->first;
//
//
//			}
//
//			//debugging
//			/*for (int i : v) cout << i << " ";
//			cout << "\n";*/
//
//			int ret = 1;
//			for (int i : v) ret *= (i + 1);
//			cout << ret - 1 << "\n";
//		}
//
//	}
//	return 0;
//}